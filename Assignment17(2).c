#include<stdio.h>

void pattern(int iNo)
 {
    int iCnt = 0; 

    printf("Output: ");
    for (int iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d ",iCnt); 
        printf("# "); 
         
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