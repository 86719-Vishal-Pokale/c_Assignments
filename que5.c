#include <stdio.h>

int main()
{
    char ch;
    printf("Enter Character\n");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("Lower case character!!!");
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("Uppercase character!!!");
    }
    else if (ch>='0' && ch<='9')
    {
        printf("number of digit!!!");
    }
    else
    {
        printf("special character!!!");
    }
}