#include<stdio.h>

void pattern(int iRow, int iCol)
{
    char ch = 'a';
    int iNum = 1;

    for (int i = 1; i <= iRow; i++) 
    {
        for (int j = 1; j <= iCol; j++) 
        {
            if (i % 2 == 1) 
            {
                printf("%c ", ch);
                ch++;
            }
            else 
            {
                printf("%d ", iNum);
                iNum++;
            }

            if (iNum > 5) 
            {
                iNum = 1;
            }

            if (ch > 'e') 
            {
                ch = 'a';
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