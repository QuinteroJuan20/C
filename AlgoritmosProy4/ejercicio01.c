#include <stdio.h>
#include <assert.h>

void holaHasta(int n){
    while (n--)
    {
        printf("Hola\n");
    }
}

int main(void)
{
    int x;
    printf("n:");
    scanf("%d", &x);
    printf("nro de veces a imprimir: %d\n", x);
    assert (x > 0);
    holaHasta(x);
}
