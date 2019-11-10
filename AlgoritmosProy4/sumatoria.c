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

int sumatoria(int a[], int n_max){
    int r=0;
    while(--n_max>=0){
        r += a[n_max];
    }
    return r;
}

int main(void)
{
    int tam;
    printf("tamanio: ");
    scanf("%d", &tam);
    int a[tam];
    pedirArreglo(a, tam);
    printf("res: %d\n", sumatoria(a, tam));
}
