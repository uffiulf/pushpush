#include <stdio.h>
#include <stdlib.h>

int compare (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}


int main()
{
    int count=0;
    printf("Count: ");
    scanf("%i", &count);
    if(count==0)
    {
        printf("No numbers were given\n");
        return 0;
    }
    int *ptr = malloc(count*sizeof(int));


    for (int i = 0; i < count; i++)
    {
        scanf("%i", &ptr[i]);
    }
    printf("Numbers: ");
    for (size_t i = 0; i < count; i++)
    {
        printf("%i ", ptr[i]);
    }
    printf("\n");
    qsort(ptr, count, sizeof(int), compare);
    printf("Sorted: ");
    for (size_t i = 0; i < count; i++)
    {
        printf("%i ", ptr[i]);
    }
    printf("\n");
    free(ptr);
    return 0;
}
