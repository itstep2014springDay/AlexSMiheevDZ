#include <stdio.h>
#define LOWER 0 /* нижн€€ граница таблицы */
#define UPPER 300 /* верхн€€ граница */
#define STEP 20 /* размер шага */
/* печать таблицы температур по ‘аренгейту и ÷ельсию */
main ()
{
    int fahr;
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf ("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    return 0;
}
