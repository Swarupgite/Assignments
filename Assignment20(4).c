#include<stdio.h>

void pattern(int iRow, int iCol)
{
    int iNum = 1;
    int sign = 1; 

    for (int i = 1; i <= iRow; i++) 
    {
        for (int j = 1; j <= iCol; j++) 
        {
            if (sign == 1) 
            {
                printf("%d  ", iNum);
            } else 
            {
                printf("%d  ", -iNum);
            }
            iNum++;
            if (iNum > 5) 
            {
                iNum = 1;
            }
        }
        printf("\n");
        sign *= -1; 
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and column :");
    scanf("%d %d",&iValue1,&iValue2);

    pattern(iValue1,iValue2);

    return 0;
}