#include<stdio.h>

void DisplayConvert( char cValue)
{

    if(cValue >= 'a' && cValue <= 'z')
    {
        cValue = cValue-32;
        printf("%c",cValue);
    }
    else if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c",cValue);
    }
}
int main()
{
    int cValue = '\0';
    printf("Enter character\n");
    scanf("%c",&cValue);
    DisplayConvert(cValue);
    return 0;

}    
