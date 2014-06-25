#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Give me the first number\n");
    scanf("%d", &a);
    printf("Give me a second number\n");
    scanf("%d", &b);
    printf("%d + %d = %d\n", a,b,a+b);
    printf("%d - %d = %d\n", a,b,a-b);
    printf("%d * %d = %d\n", a,b,a*b);
    printf("%d / %d = %d\n", a,b,a/b);
    return 0;
}
