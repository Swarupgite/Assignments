#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iAns = 1;
    for (int i = 2; i <= iNo; i += 2) 
    {
        iAns *= i;
    }
    return iAns;
}



int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("%d",iRet);
    return 0;

}    
