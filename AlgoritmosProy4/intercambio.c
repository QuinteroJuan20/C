#include <stdio.h>

int main(void)
{
    int x, y;
    printf("x:");
    scanf("%d", &x);
    printf("y:");
    scanf("%d", &y);
    x += y;
    y = x - y;
    x -= y;
    printf("x: %d, y: %d", x, y);
}
