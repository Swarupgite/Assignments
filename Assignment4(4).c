#include<stdio.h>

int SumNonFact(int iNo)
{
   int i = 0;
   int iSum = 0;
   
   
    for(i = 1;i <= iNo;i++)
    {
        if((iNo % i)!=0)
        {
            iSum = iSum + i;
        }
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);
    printf("%d\n",iRet);
    return 0;
}