#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>




void string_reverse(int count, char string[])
    {
        printf("The word reversed is '");
        for (int j = 0; j < count; ++j)
        {
            printf("%c", string[count - j -1]);
         }
        printf("'\n");
    }
bool is_palindrome(int length, char string[])
    {
        for (int j = 0; j < length; j++)
        {
            if (string[j] != string[length - j - 1])
            {
                printf("The word is not a palindrome\n");
                return false;
            }
        }
        printf("The word is a palindrome\n");
        return true;
    }


int main()
{
    char string[100] ={0};
    int count, i;
   // int string_reverse; // need to have this to pass the test // needs to return nothing || void


    printf("Enter word: ");
//scanf("Input string here; %[^\n]s",string);
    fgets(string,100,stdin);
//scanf("\n\n%[^\n]s", string);       // %[^\n]   is to continue counting letters after space
    string[strlen(string)-1] = 0;
    int length = strlen(string);

    


    printf("The word contains %i letters\n",length);

    is_palindrome(length, string);

    string_reverse(length,string);





return 0;

}