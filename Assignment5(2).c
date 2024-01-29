#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
#define true 1
#define false 0

BOOL ChkGreater(int iValue)
{
    if(iValue < 100)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main()
{
    int iValue = 0;
    BOOL bRet = false;

    printf("Please Enter number");
    scanf("%c",&iValue);

    bRet = ChkGreater(iValue);

    if(bRet == true)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }
    return 0;
}