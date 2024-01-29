#include<stdio.h>

int Table(int iNo)
{
    
    int i;
    for (i = 10; i >= 1; i--) 
    {
        printf("%d  ",iNo * i);
    
    }
    
}
int main()
{
    int iValue = 0;
   
    printf("Enter number\n");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;

}    
