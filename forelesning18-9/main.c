#include <stdio.h>

#define ARRAY_SIZE 10
void array_traversal(int numbers[], int len)


void pl(){
    printf("hello, world!");

}

void p2(char input[]){
    printf("Hello, %s", input);
}

void print_hello_world();
void print_hello_world(char input[]);


void p3(int a, int b){
    if(a > b){
        printf("\n\na is greater than b");


    }
    else if(a < b){

        printf("\n\nb is greater than a");
    }

    else (a == b){
        {
            printf("\n\na and b are equal");
        }
    }

}

void p4(int array[], int length){
    for (int i = 0; i < length - 1; ++i) {
        //check if the value of the current index is larger than the value of the next index.
        if(array[i] > array[i + 1]) printf("%i is larger than %i\n");
        //Check if the value of the current index is LESS than the value of the next index.
        else if(array[i] < array[i + 1]) printf("%i is larger than %i\n");
        //else equal
        else
            printf("%i and %i are equal\n", array[i], array[i +1]);
    }
    printf("\n");
}

void array_traversal(int numbers[], int len);
{
        for (int i = 0; i < len ; ++i)printf("Index: %i, has value %i\n", i, numbers[i]);
             printf("\n");
}





int main() {

    int num[10] ={12, 3, 5, 2, 16, 10, 24, 5, 2};

    int len = sizeof(num) / sizeof(num[0]);

    p4(num,len);

    int num1;
    int num2;
    printf("type in value for a: ");
    scanf("%i", &num1);
    printf("type in value for b: ");
    scanf("%i", &num2);
    //scanf("%i", p3(4,5));


    //pl();

    p3(num1,num2);

        return 0;


}

    void print_hello_world(){
    printf("Hello,woor");
}
