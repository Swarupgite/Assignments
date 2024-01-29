#include <stdio.h>
#include <stdlib.h>

int SumDigits(int iNo)
{
    int iSum = 0;
    while (iNo > 0)
    {
        iSum += iNo % 10;
        iNo /= 10;
    }
    return iSum;
}

int main()
{
    int iSize = 0;
    int *p = NULL;

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

    printf("Sum of digits for each number: ");
    for (int i = 0; i < iSize; i++)
    {
        int iSum = SumDigits(p[i]);
        printf("%d ", iSum);
    }
    printf("\n");

    free(p);

    return 0;
}
