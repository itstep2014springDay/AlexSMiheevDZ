#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x, sum=1.0, addition=1.0, eps=1e-4;
    printf("Add X");
    scanf("%lf", &x);
    int n=1, flag=x<0.0;
    if(flag)
    {
        x=-x;
    }
    while(fabs(addition)>eps)
    {
        addition=addition*(x/n);
        sum=sum+addition;
        ++n;
    }
    if(flag)
    {
        sum=1.0/sum;
        x=-x;
    }
    printf("m: % g\n", sum);
    printf("l: % g\n", exp(x));
    printf("d: % g\n", sum - exp(x));
    return 0;
}
