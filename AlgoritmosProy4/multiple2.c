#include <stdio.h>

int main(void)
{
    int x, y, z;
    printf("x:");
    scanf("%d", &x);    
    printf("y:");
    scanf("%d", &y);    
    printf("z:");
    scanf("%d", &z);    
    y += x + z;
    z = y - z;
    x = z - x;
    printf("x: %d, y: %d, z: %d", x, y, z);
}
