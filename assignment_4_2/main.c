#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "stdbool.h"

void string_upper(char str[])
{
    printf("The string in uppercase is '");
    for (int i = 0; i < strlen(str) - 1; ++i)
    {
        str[i] = toupper(str[i]);
        printf("%c", str[i]);
    }
    printf("'\n");
}

void string_lower(char str[])
{
    printf("The string in lowercase is '");
    for (int i = 0; i < strlen(str) - 1; i++)
    {
        str[i] = tolower(str[i]);
        printf("%c", str[i]);
    }
    printf("'\n");
}

void strsplit(char str[])
{
    printf("The string split in two is '");
    for (int i = 0; i < strlen(str) - 1; ++i)
    {
        if(i == strlen(str)/2)
        {
            printf("-");
        }
        printf("%c", str[i]);
    }
    printf("'\n");

}


int main()
{
    char string[] = {'\0'};
    printf("enter string: ");
    fgets(string,100,stdin);
    string_upper(string);
    string_lower(string);
    strsplit(string);

    return 0;
}