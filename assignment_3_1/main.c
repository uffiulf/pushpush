#include <stdio.h>
#include <stdlib.h>

int minumum(int a[])     {            //variable will vanish after use
    return a[0];
}
int maximum(int b[])  {
    return b[9];
}
int sum(int s[]){
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
       sum += s[i];
    }
    return sum;
}
float average(int a[]){
    float average = sum(a)/10.0;
    return average;
}
float median(int e[]){
    float medi = (e[4]+e[5])/2.0;
    return medi;
}
int comparefunc(const void * a,const void * b){
    return (* (int* )a - *(int*) b);
}



int main() {
    float num;     //input from user
    int array_num[10];

    for (int i = 0; i < 10; ++i) {    //repeat 10 times

        printf("Insert your number here: ");
        scanf("%f", &num);
        array_num[i]=num;


    }

    qsort(array_num,10,sizeof(int),comparefunc);
    printf("Minimum: %i\n",minumum(array_num));
    printf("Maximum: %i\n",maximum(array_num));
    printf("Sum: %i\n",sum(array_num));
    printf("Average: %g\n", average(array_num));
    printf("Sorted: ");
    for (int j = 0; j < 10; ++j) {
        printf("%i ",array_num[j]);
    }
    printf("\n");
    printf("Median: %g\n",median(array_num));

    return 0;
}
