#include<stdio.h>

int FactDiff(int iNo)
{
   int i = 0;
   int iSum = 0;
   int iSum2 = 0;
   for(i = 1;i <= iNo;i++)
    {
        if((iNo % i)==0)
        {
            iSum = iSum + i;
        }
    
   
    for(i = 1;i <= iNo;i++)
        
        if((iNo % i)!=0)
        {
            iSum2 = iSum + i;
        }
        
    }
       return iSum-iSum2;
    
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);
    return 0;

}    
