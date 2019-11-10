#include <stdio.h>

struct datos_t {int maximo;int minimo;};

struct datos_t max_min(int a[], int n_max)
{
    struct datos_t res;
    res.maximo = a[0];
    res.minimo = a[0];
    while(n_max>=0)
    {
        if(a[n_max] < res.minimo) res.minimo = a[n_max];
        if(a[n_max] > res.maximo) res.maximo = a[n_max];
        n_max--;
    }
    return res;
}

void pedirArreglo(int a[], int n_max)
{
    while (n_max>=0)
    {
        printf("inserte un valor: ");
        scanf("%d", &a[n_max]);
        n_max--;
    }
}

void imprimeArreglo(int a[], int n_max)\
{
    printf("[%d, ", a[n_max]);
    while (--n_max>0)
    {
        printf("%d, ", a[n_max]);;
    }
    printf("%d]\n", a[n_max]);
}

int main(void)
{
    int tam, n;
    printf("tamanio: ");
    scanf("%d", &tam);
    int a[tam];
    pedirArreglo(a, --tam);
    imprimeArreglo(a, tam);
    struct datos_t res =  max_min(a, tam);
    printf("maximo: %d\nminimo: %d\n", res.maximo, res.minimo);
}
