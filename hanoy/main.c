#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n;
  printf("ent N:");
  scanf("%d", &n);
  chanoi('A', 'B', 'C', n);
    return 0;
}
void chanoi(char a, char b, char c, int n)
{
    if(1==n)
    {
        printf("%c -> %c\n", a,b);
    }
    else
    {


        chanoi(a, c, b, n-1);
        printf("%c -> %c\n", a,b);
        chanoi(c,b,a,n-1);
    }
}

