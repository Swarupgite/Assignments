#include<stdio.h>

void pattern(int iNo)
 {
    char ch = 'A'; 

    printf("Output: ");
    for (int i = 1; i <= iNo; i++)
    {
        printf("%c ", ch); 
        ch++; 
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