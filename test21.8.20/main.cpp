#include "stdio.h"
#include <string.h>
#include <stdbool.h>

/*

int main()
{
              stoneage tech.
char name;
char name2;
char name3;

   // std::cout << "Hello, World!" << std::endl;

   

   printf("Hi whats your name? ");
   {

      scanf("%c%c%c", &name, &name2, &name3);
      printf("%c%c%c",name,name2,name3);
   }

   return 0;
}


//void print_hw(const char name[]);{

  // printf("Hello %s\n");


 int a_b(int a, int b){
    int sum = a+b;
    return sum
}
 */

void hello(char name[]) {
    printf("Hello %s\n",name);
}

int main() {
    char name[50] = {'\0'};
    printf("Please enter your first name: \n");
    fgets(name, sizeof(name), stdin);

hello(name);


bool str_cmp( const char str1[], const char str2[]){
    int i = 0;

    while(str1[i]== str2[i])
        if(str1[i] == '\0' && str2[i] == '\0') return true;
        if(str1[i] == '\0' && str2[i] == '\0') return false;
        if(str1[i] == '\0' && str2[i] == '\0') return false;

        i++;

}
return false;

int str_cmp2(const char str1[]){
    char alice[] = "Alice\n";
    char bob[] = "Bob\n";

    if !strcmp(str1, bob || !str_cmp(str1, alice))
}

}


