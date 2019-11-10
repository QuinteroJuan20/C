#include <stdio.h>

void ordenar(int a[], int n_max)
{
    int i;
    while (n_max>0)
    {   
        i = n_max-1;
        while (i>=0)
        {   
            if(a[n_max] > a[i])
            {
                a[n_max] += a[i];
                a[i] = a[n_max] - a[i];
                a[n_max] -= a[i];
            }
            i--;
        }   
        n_max--;
    }  
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

void main(void)
{
    int tam;
    printf("tamanio: ");
    scanf("%d", &tam);
    int a[tam];
    pedirArreglo(a, --tam);
    imprimeArreglo(a, tam);
    ordenar(a, tam);
    imprimeArreglo(a, tam); 
}