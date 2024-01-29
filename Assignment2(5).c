#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

bool ChkEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number :");
    scanf("%d",&bRet);

    bRet = ChkEven(iValue);

    if(bRet == TRUE)
  {
    printf("Number is Even\n");
  }
  else
  {
    printf("Number is odd\n");
  }
    return 0;
}