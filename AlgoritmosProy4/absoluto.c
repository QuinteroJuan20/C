#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int x;
    printf("x:");
    scanf("%d", &x);
    x = abs(x);
    printf("valor absoluto: %d", x);
}
