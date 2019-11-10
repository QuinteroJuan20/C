#include <stdio.h>

int main(void)
{
    int x, y;
    printf("x:");
    scanf("%d", &x);    
    printf("y:");
    scanf("%d", &y);    
    x += 1;
    y += x;
    printf("x: %d, y: %d", x, y);
}
