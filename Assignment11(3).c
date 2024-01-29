#include<stdio.h>
#include<string.h>
int CountTwo(int iNo)
{
    char str[20]; 
    sprintf(str, "%d", iNo); 
    int count = 0;
    
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '2')
        {
            count++;
        }
    }
    return count;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);
    printf("%d",iRet);

    return 0;
}