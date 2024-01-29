#include<stdio.h>
int RangeSumEven(int iStart, int iEnd)
{
    if (iStart < 0 || iEnd < 0) 
    {
        printf("Invalid range.\n");
        return 0;
    }

    int sum = 0;
    for (int i = iStart; i <= iEnd; ++i) 
    {
        if (i % 2 == 0) 
        sum += i;
    }

    return sum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;
    
    printf("Enter starting point : \n");
    scanf("%d",&iValue1);

    printf("Enter ending point : \n");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1,iValue2);
    printf("Addition is : %d\n",iRet);
    return 0;
}