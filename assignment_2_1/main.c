#include <stdio.h>





int main()
{
    int count = 0;
    float sum = 0;
    float num = 0;
    float avg = 0;
    
    printf("Hi, type in any number here, type 0 to end program: ");

    scanf("%f", &num);


    sum += num;


    if(num == 0){

       
       //give sum, count, avg and end program

       printf("Count: %i\n", count);
       printf("Sum: %g\n", sum);
       printf("Average: %g\n", avg);

       // tip to myself .... %g = standard format "for avrunding"


    }

    else{


        while (num != 0)
        {

            printf("Hi, type in any number here, type 0 to end program: ");

            scanf("%f", &num);
            count ++;
            sum += num;
           


        }

         avg = sum/count;  //possible error - fixed!

         printf("Count: %i\n", count);
         printf("Sum: %g\n", sum);
         printf("Average: %g\n", avg);



    }


    //sum up all numbers input by user
    //give average of total numbers given
    //count input by user

    // only one decimal on answer

    return 0;
}
