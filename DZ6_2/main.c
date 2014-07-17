#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, nod, nok;
    printf("Give the first number\n");
    scanf("%d", &a);
    printf("Give the second number\n");
    scanf("%d", &b);
    while(a!=b)
    {
        if(a>=b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
    }
    nod=a;
    nok=a*b/nod;
    printf("Least common multiple: %d", nok);
    return 0;
}
