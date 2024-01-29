#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
#define true 1
#define false 0

BOOL ChkEqual(int iValue1, int iValue2)
{
    if(iValue1 == iValue2)
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
    int iValue1 = 0, iValue2 = 0;
    BOOL bRet = false;

    printf("Please Enter two number");
    scanf("%d %d",&iValue1, &iValue2);

    bRet = ChkEqual(iValue1, iValue2);

    if(bRet == true)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }
    return 0;
}