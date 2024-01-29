#include <stdio.h>
#include <stdlib.h>
int Product(int Arr[], int iLength)
{
    int product = 0;
    for (int i = 0; i < iLength; i++)
    {
        if (Arr[i] % 2 != 0) 
        {
            product *= Arr[i]; 
        }
    }
    return product;
}

    
int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL; 
    int iRet = 0;

    printf("Enter the number of elements: \n");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements: \n", iSize);

    for (int iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter the element no %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Product(p, iSize);
    printf("Product of all odd elements in the array: %d\n", iRet);

    free(p);

    return 0;
}
