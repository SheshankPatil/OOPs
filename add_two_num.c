#include <stdio.h>
#include <stdlib.h>

int a;
int b;
int x;

int main()
{
    printf("enter the number of additions");
    scanf("%d", &x);

    for (int i = 0; i < x; i++)
    {
        printf("enter the number to add");
        scanf("%d", &b);
        a += b;
    }
    printf("your addition is= %d", a);
}
