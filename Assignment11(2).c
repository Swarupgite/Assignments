#include<stdio.h>

# define TRUE 1
# define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    
    while (iNo != 0)
    {
        if (iNo % 10 == 0)
        {
            return TRUE;
        }
        iNo /= 10;
    }
    return FALSE;

}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }

    return 0;
}