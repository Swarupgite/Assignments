#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return ;
    }  
       for(iNo = 1;iNo <= 7 ;iNo++)
       {
       printf("%d ",2*iNo);  
       }

    
    
}
int main()
{
    int iValue = 0;
    printf("Even number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);
    
    return 0;
}