#include <stdio.h>
#include <string.h>

#define LEN 20

int main()
{
    char str[LEN];
    printf("Få string: ");
    scanf("%s \n", &str);
    printf("Your string: %s\n", str);

    int a;
    printf("Enter number here: \n");
    scanf("%i", &a);
    printf("you typed: %i\n", a);
     return 0;
}
