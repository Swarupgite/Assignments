#include<stdio.h>

void Display(int iNo,int iFrequency)
{
    int i = 0;
    for(iNo = 1;iNo <= iFrequency;iNo++)
    {
        printf("%d",iNo);
    }

}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    printf("Enter number");
    scanf("%d",&iCount);

    Display(iValue,iCount);
    return 0;
}