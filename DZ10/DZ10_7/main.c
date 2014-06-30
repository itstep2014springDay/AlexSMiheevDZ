#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Give me the first number\n");
    scanf("%d", &a);
    printf("Give me a second number\n");
    scanf("%d", &b);
    printf("Give me a second number\n");
    scanf("%d", &c);

    while(b ==0)
    {
        printf("Give me a second number\n");
        scanf("%d", &b);
    }
    while(c ==0)
    {
        printf("Give me a third number\n");
        scanf("%d", &c);
    }

    printf("%d + %d + %d = %d\n", a,b,c,a+b);
    printf("%d - %d - %d = %d\n", a,b,c,a-b);
    printf("%d * %d * %d = %d\n", a,b,c,a*b);
    printf("%d / %d / %d = %d\n", a,b,c,a/b);
    return 0;
}
