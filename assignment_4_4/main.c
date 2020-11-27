#include <stdio.h>
#include <string.h>


void main() {
    char ch[56];
    int j, k, i;
    printf("Enter string: ");
    fgets(ch, 56, stdin);

    for (i = 0; ch[i] != '\0'; i++)
    {
        k = 1;


        for (j = i + 1; ch[j] != '\0'; j++)
        {
            if (ch[i] == ch[j])
            {
                k++;
                ch[j]='&';
            }
        }
        if (ch[i]!='&')
            printf("\n '%c' : %d", ch[i], k);
    }


    
}
