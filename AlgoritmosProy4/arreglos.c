#include <stdio.h>

void pedirArreglo(int a[], int n_max)
{
    while (n_max>0)
    {
        printf("inserte un valor: ");
        scanf("%d", &a[n_max-1]);
        n_max--;
    }
}

void imprimeArreglo(int a[], int n_max)\
{
    printf("[%d, ", a[--n_max]);
    while (--n_max>0)
    {
        printf("%d, ", a[n_max]);;
    }
    printf("%d]\n", a[n_max]);
}

int main(void)
{
    int tam;
    printf("tamanio: ");
    scanf("%d", &tam);
    int a[tam];
    pedirArreglo(a, tam);
    imprimeArreglo(a, tam);
}
