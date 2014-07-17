#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, nod;
    printf("Give first digits:\n");
    scanf("%d", &a);
    printf("Let the second digits:\n");
    scanf("%d", &b);
    while(a!=b)
    {
        if(a>=b)
        {
            a=a-b;
        }
        else
            b=b-a;
    }
    nod=a;
    printf("Greatest common divisor %d", nod);
    return 0;
}
