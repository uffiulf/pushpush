#include <stdio.h>
#include "string.h"

#define LEN 20
int main()
{
    char a[LEN];
    printf("Geiff: ");
   // scanf("%s")
    char c = getchar();
    int i = 0;
    while (c!='\n' && c != EOF)
    {
        a[i]=c;
        ++i;
        c=getchar();
    }
    for ( ; i>=0 ;i-- )
    {
        printf("%c", a[i]);
    }
}