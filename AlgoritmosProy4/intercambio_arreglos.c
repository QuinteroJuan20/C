#include <stdio.h>

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

int intercambiar(int a[], int i, int j)
{
    a[i] += a[j];
    a[j] = a[i] - a[j];
    a[i] -= a[j];
}

int main(void)
{
    int tam, i, j;
    printf("tamanio: ");
    scanf("%d", &tam);
    int a[tam];
    pedirArreglo(a, --tam);
    imprimeArreglo(a, tam);
    printf("i:");
    scanf("%d", &i);
    printf("j:");
    scanf("%d", &j);
    intercambiar(a, (tam-i), (tam-j));
    imprimeArreglo(a, tam);
}
