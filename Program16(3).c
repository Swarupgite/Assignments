#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

int Difference(int Arr[], int iLength)
{
    int iMax = Arr[0];
    int iMin = Arr[0];

    for (int i = 1; i < iLength; i++)
    {
        if (Arr[i] > iMax)
        {
            iMax = Arr[i];
        }
        else if (Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
    }

    return iMax - iMin;
}

int main()
{
    int iSize = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

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

    bRet = Difference(p, iSize);
    printf("Difference is %d ", bRet);

    free(p);

    return 0;
}
