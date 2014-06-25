#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0,sum=1,inp;
    printf("Enter N\n");
    scanf("%d", &n);
    for (int i=1; i<=n; ++i)
    {
        printf("Enter imp\n");
        scanf("%d", &inp);
        sum=sum*inp;

    }
    printf("%d\n",sum);

    return 0;
}
