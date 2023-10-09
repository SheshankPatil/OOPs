#include <stdio.h>
#include <stdlib.h>
#include <time.h>

srand(time(NULL));

int main()
{
    int rand1 = rand() % 100 + 1;
    int rand2 = rand() % 100 + 2;

    printf(rand1);
}
