#include<stdio.h>

int OddFactorial(int iNo)
{
    
    int iAns = 1;
    for (int i = 1; i <= iNo; i += 2) 
        iAns *= i;
    
    return iAns;
}


int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("%d",iRet);
    return 0;

}    
