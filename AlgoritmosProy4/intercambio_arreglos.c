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

int intercambiar(int a[], int tam, int i, int j)
{
    int b;
    b = a[i];
    a[i] = a[j];
    a[j] = b;
}

int main(void)
{
    int tam, i, j;
    printf("tamanio: ");
    scanf("%d", &tam);
    int a[tam];
    pedirArreglo(a, tam);
    imprimeArreglo(a, tam);
    printf("i:");
    scanf("%d", &i);
    printf("j:");
    scanf("%d", &j);
    intercambiar(a, tam, i, j);
    imprimeArreglo(a, tam);
}
