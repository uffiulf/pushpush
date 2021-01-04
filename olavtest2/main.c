#include <stdio.h>

int main() {
    int vaffel = 0;
    int brus = 0;
    int kake = 0 ;
    int bolle = 0;

    int ture = 0;
    for (vaffel = 1; vaffel < 50 ; ++vaffel)
    {
        for (brus = 1; brus < 50 ; brus++)
        {
            for (kake = 1; kake < 50; ++kake)
            {
                for (bolle = 1; bolle < 50 ; ++bolle)
                {
                    if((vaffel+kake)==45 && (vaffel+brus)==33 && (kake*bolle)==60 && (brus*bolle)==24)
                    {
                        ture = 1;
                        break;
                    }
                }
                if (ture)
                    break;
            }
            if(ture)
                break;
        }
        if(ture)
            break;
    }
    printf("SVAR %d\n",vaffel+bolle+kake);
    printf("Vaffel = %i Bolle = %i Kake = %i", vaffel,bolle, kake);

    return 0;
}
