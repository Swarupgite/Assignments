#include <stdio.h>
#include <stdlib.h>

int Digits(int Arr[], int iLength)
{
    printf("Numbers with three digits in the array: ");
    for (int i = 0; i < iLength; i++)
    {
        if (Arr[i] >= 100 && Arr[i] <= 999)
        {
            printf("%d ", Arr[i]);
        }
    }
    printf("\n");
}

int main()
{
    int iSize = 0;
    int *p = NULL;
    int bRet = 0;

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

    Digits(p, iSize);

    free(p);

    return 0;
}
