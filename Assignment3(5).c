#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

bool Chkvowel(char cValue)
{
    if(cValue == 'a','e','i','o','u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character\n");
    scanf("%c",&cValue);

    bRet = Chkvowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is vowel\n");
    }
    else
    {
        printf("It is not vowel\n");
    }
    return 0;
}