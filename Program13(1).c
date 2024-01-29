#include <stdio.h>
#include <stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iEvenSum = 0, iOddSum = 0;

    for (int iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] % 2 == 0)
        {
            iEvenSum += Arr[iCnt];
        }
        else
        {
            iOddSum += Arr[iCnt];
        }
    }

    return iEvenSum - iOddSum;
}

int main()
{
    int iSize = 0;
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

    iRet = Difference(p, iSize);
    printf("Result is %d\n", iRet);

    free(p);

    return 0;
}
