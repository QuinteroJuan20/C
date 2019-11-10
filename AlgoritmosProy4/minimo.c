#include <stdio.h>

int main(void)
{
    int x, y;
    printf("x:");
    scanf("%d", &x);
    printf("y:");
    scanf("%d", &y);
    if(x<y)
    {
        printf("el minimo %d", x);
    }
    else
    {
        printf("el minimo %d", y);
    }
}
