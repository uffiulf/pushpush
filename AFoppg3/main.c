#include <stdio.h>

int main() {
    int circle = 1;
    int square = 2*circle;
    int triangle = 2*square;

    int circles = (2*circle)+(3*square)+(3*triangle);
    printf("%i\n", (2*circle));
    printf("%i\n",(3*square));
    printf("%i\n",(3*triangle));


    printf("%i", circles);



    return 0;
}
