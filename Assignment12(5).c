#include<stdio.h>
#include<string.h>
int CountRange(int iNo)
{
    int iSumEven = 0; 
    int iSumOdd = 0;  
    int iAns = 0;
    int idigit = 0;

    while (iNo != 0)
    {
        int idigit = iNo % 10; 
        
        if (idigit % 2 == 0)
        {
            iSumEven += idigit; 
        }
        else
        {
            iSumOdd += idigit; 
        }

        iNo /= 10; 
    }

    iAns = iSumEven - iSumOdd;
    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);
    printf("%d",iRet);

    return 0;
}