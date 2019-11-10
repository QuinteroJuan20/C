#include <stdio.h>
#include <stdlib.h>

void pedirArreglo(int a[], int n_max)
{
    while (n_max>0)
    {
        printf("inserte un valor: ");
        scanf("%d", &a[n_max-1]);
        n_max--;
    }
}

void imprimeArreglo(int a[], int n_max)
{
    printf("[%d, ", a[--n_max]);
    while (--n_max>0)
    {
        printf("%d, ", a[n_max]);;
    }
    printf("%d]\n", a[n_max]);
}

void diferencia(int a[], int n_max)
{
    int ic=n_max-1, is=n_max-2;
    while(--n_max>0){
        if (abs(a[n_max]-a[n_max-1]) > abs(a[ic]-a[is]))
        {
            ic = n_max;
            is = ic -1;
        }
    }
    printf("diferencia mas grande encontrada es entre %d y %d, dif: %d\n", a[ic], a[is], abs(a[ic]-a[is]));
}

int main(void)
{
    int tam;
    printf("tamanio: ");
    scanf("%d", &tam);
    int a[tam];
    pedirArreglo(a, tam);
    imprimeArreglo(a, tam);
    diferencia(a, tam);
}
