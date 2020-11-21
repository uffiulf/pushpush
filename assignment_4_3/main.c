#include <stdio.h>
#include <string.h>

#define MAX_LIMIT 100

int main()
{
    char str1[MAX_LIMIT];
    char str2[MAX_LIMIT];
    // ask for the first string
    printf("Enter first string: \n");
    scanf("%s", str1);
    // ask for the second string
    printf("Enter second string here: \n");
    scanf("%s", str2);

    if(!strcmp(str1,str2))    // If the comparison is 0, then the strings are equal
        printf("The strings are equal\n");
    else
        printf("The strings are not equal\n");

    char * pFirstString, *pSecondString; // declare 2 char pointers
    pFirstString = strstr(str2, str1);   // return pointer to first char that matches string 1 in string 2
    pSecondString = strstr(str1, str2);  // return pointer to first char that matches string 2 in string 1
    if(pFirstString != 0 || pSecondString != 0)   // if either is a substring og the other then it's a substring
        printf("It is a substring!\n"); 
    else
        printf("It is not a substring!\n");

    return 0;
}