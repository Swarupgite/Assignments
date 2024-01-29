#include <stdio.h>
#include <stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo)
{
    int iLastindex = -1;
    for (int i = 0; i < iLength; i++)
    {
        if (Arr[i] == iNo)
        {
            iLastindex = i; 
        }
    }
    return iLastindex; 
}
    
int main()
{
    int iSize = 0, iCnt = 0;
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

    printf("Enter the number to find its index: ");
    scanf("%d", &iNo);

    iRet = LastOcc(p, iSize, iNo);

    if(iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("First occurrence of number %d is at index %d\n", iNo, iRet);
    }

    free(p);

    return 0;
}
