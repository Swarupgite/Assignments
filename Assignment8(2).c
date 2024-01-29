#include<stdio.h>

int DollertoINR(int iNo)
{
    int iAns = 0;
    iAns = iNo * 70;
    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number of USD: ");
    scanf("%d", &iValue);

    iRet = DollertoINR(iValue); 

    printf("Value in INR is: %d", iRet);
    
    return 0;
}
