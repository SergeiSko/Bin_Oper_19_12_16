#include <stdio.h>
#include <limits.h>

int main (void)
{
    int a, b, k;
    do
    {
        scanf("%d", &a);
        scanf("%d", &b);
        k = (a & b);///a = b * 2^k
        printf("K: %d\n(124)-end\n", k);
    }while(b != 124);


    return 0;
}
