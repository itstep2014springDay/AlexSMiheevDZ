#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Give me an integer!\n");
    scanf("%d", &a);
    while(a==1)
    {
        printf("I do not eat it!\n");
        printf("Give me an integer!\n");
        scanf("%d", &a);
    }
    if(b=1)
    {
        b=a/a;
        printf("mnyam, mnyam\n");
    }
    else
    {
        printf("I'm still hungry!\n");
    }

    return 0;
}
