#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>




void string_reverse(int count, char string[])
    {
        for (int j = 0; j < count; ++j)
        {
            printf("%c", string[count - j -1]);
         }
        printf("\n");
    }
bool is_palindrome(int length, char string[])
    {
        for (int j = 0; j < length; j++)
        {
            if (string[j] != string[length - j - 1])
            {
                printf("%s is not a palindrome\n", string);
                return false;
            }
        }
    }


int main()
{
    char string[20];
    int count, i;
   // int string_reverse; // need to have this to pass the test // needs to return nothing || void


printf("Enter word: ");
//scanf("Input string here; %[^\n]s",string);
scanf("\n\n%[^\n]s", string);       // %[^\n]   is to continue counting letters after space
    int length = strlen(string);

        while(string[i]!='\0')          // break loop when string is finished
        {
            if((string[i]>='a' && string[i]<='z') || (string[i]>='A' && string[i]<='Z'))  // add +1 to i for each letter
            {
              count++;
            }
          i++;
        }


    printf("letter count: %i\n",count);
        printf("%s is a palindrome\n", string);



string_reverse(length,string);





return 0;

}