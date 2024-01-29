#include<stdio.h>

void pattern(int iNo)
 {
    int iCnt = 0; 

    printf("Output: ");
    for (int iCnt = 1; iCnt <= 2*iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
        printf("%d ",iCnt); 
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements :");
    scanf("%d",&iValue);

    pattern(iValue);
    return 0;
}