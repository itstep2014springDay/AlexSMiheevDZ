#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, rez=1;

    printf("Give me the power\n");
    scanf("%d", &y);
    for(int i=0; i<y; ++i)
    {
        printf("Give me a number\n");
        scanf("%d", &x);
        rez = rez * x;
    }
    printf("Result = %d\n", rez);


    return 0;
}
