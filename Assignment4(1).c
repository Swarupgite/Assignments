#include<stdio.h>

int MultFact(int iNo)
{
    int i = 0;
    int iMul = 1;
    for(i = 1;i <= iNo/2;i++)
    {
        if((iNo % i == 0))
        {
            iMul *= i;
           
        }

    }
    return  iMul;
    
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);
    return 0;

}    
