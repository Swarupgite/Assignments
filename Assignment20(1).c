#include<stdio.h>

void pattern(int iRow, int iCol)
{
    int iNum = 1;

    for (int i = 1; i <= iRow; i++) 
    {
        for (int j = 1; j <= iCol; j++) 
        {
            printf("%d ", iNum);
            iNum++;
            if (iNum > 9) {
                iNum = 1;
            }
        }
        printf("\n");
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