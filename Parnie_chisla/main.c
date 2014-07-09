#include <stdio.h>
#include <stdlib.h>
int summOfDigits(int i);
int main()
{
    int a, b;
    printf("Enter A\n");
    scanf("%d", &a);
    printf("Enter B\n");
    scanf("%d", &b);
    for(int i=a; i<b; ++i)
    {
        for(int j=i+1; j<=b; ++j)



            if(summOfDigits(i)==summOfDigits(j))
            {
                printf("%d %d\n", i, j);
            }
    }

    return 0;
}
int summOfDigits(int i)
{
    int summa=0;
    while(i)
    {
        summa+=i%10;
        i/=10;
    }
    return summa;
}

