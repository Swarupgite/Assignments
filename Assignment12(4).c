#include<stdio.h>
#include<string.h>
int CountRange(int iNo)
{
    int iAns = 1; 
    int idigit = 0;

   
    while (iNo != 0)
    {
        int idigit = iNo % 10; 

     
        if (idigit != 0)
        {
            iAns *= idigit;
        }

        iNo /= 10; 
    }

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