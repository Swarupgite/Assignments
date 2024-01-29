#include <stdio.h>
#include <stdlib.h>

void Range(int Arr[], int iLength, int iNo1, int iNo2)
{
    printf("Elements within the range [%d, %d]:\n", iNo1, iNo2);
    for (int i = 0; i < iLength; i++)
    {
        if (Arr[i] >= iNo1 && Arr[i] <= iNo2)
        {
            printf("%d ", Arr[i]);
        }
    }
    printf("\n");
}

    
int main()
{
    int iSize = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;
    int *p = NULL;
    int iNo = 0; 
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

    printf("Enter the two numbers to find its Range: ");
    scanf("%d %d", &iValue1, &iValue2);

    Range(p, iSize, iValue1, iValue2);

    free(p);

    return 0;
}
