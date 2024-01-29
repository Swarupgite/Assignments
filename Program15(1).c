#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
    for (int iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == iNo)
        {
            return TRUE;
        }
    }
    return FALSE;
}

int main()
{
    int iSize = 0, NumberToCheck = 0;
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

    printf("Enter the number to check: ");
    scanf("%d", &NumberToCheck);

    bRet = Check(p, iSize,NumberToCheck);

    if (bRet == TRUE)
    {
        printf("No is present\n",NumberToCheck);
    }
    else
    {
        printf("No is not present\n",NumberToCheck);
    }

    free(p);

    return 0;
}
