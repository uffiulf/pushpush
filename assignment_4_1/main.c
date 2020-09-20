#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define str_size 100 //Declare the maximum size of the string





int main(){
    //char string1[20];         do not need this come     //
    int j, length;                  // Code1 for palindrome
    int flag = 0;                   //
 //--------------------------------------\\
                Code2 count letter

  char str[str_size];
  int alp, i;
  alp = i = 0;
    

    printf("Enter a string:");
    //fgets(str, sizeof str, stdin);	//Code 2
    scanf("%s",str);
    length = strlen(str);

  /*  for (int k = 0; k <= length ; ++k) {
        printf("%c\n", str[k]);
    }
*/
    for(j=0;j < length ;j++){
        if(str[j] != str[length-j-1]){
            //printf("j = %c; -j = %c;",str[j], str[length-j-1]);
            flag = 1;
            break;
   }
}

    if (flag) {
        printf("%s is not a palindrome", str);
    }
    else {
        printf("%s is a palindrome", str);

    }



    while(str[i]!='\0')
       {
           if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
           {
               alp++;
           }
           i++;
       }

        printf("\nNumber of Alphabets in the string is : %d\n", alp);

/*
    for(j=0;j < length ;j++) {
        printf("%c", str[length - j - 1]);
    }
    printf("\n");

*/
    int k = length - 1;

    for (; k >= 0;) {
        printf("%c", str[k]);
        --k;
    }   */
    printf("\n");







    return 0;



}