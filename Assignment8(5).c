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

int OddFactorial(int iNo)
{
    int iAns = 1;
    for (int i = 1; i <= iNo; i += 2) 
    {
        iAns *= i;
    }
    return iAns;
}

int FactorialDiff(int iNo)
{
    int evenFact = EvenFactorial(iNo);
    int oddFact = OddFactorial(iNo);
    int diff = evenFact - oddFact;
    return diff;
}


int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("%d",iRet);
    return 0;

}    
