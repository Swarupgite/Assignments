#include<stdio.h>

int factorial(int iNo)
{
    int iAns = 0;
    if (iNo == 0 || iNo == 1) 
    {
        return 1;
    } 
    else
    {
        iAns = iNo * factorial(iNo - 1);
        return iAns;
    }
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = factorial(iValue);

    printf("%d",iRet);
    return 0;

}    
