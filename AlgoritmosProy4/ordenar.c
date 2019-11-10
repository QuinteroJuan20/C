#include <stdio.h>

void ordenar(int a[], int n_max)
{
    int i, x=n_max;
    while (--x>=0)
    {   
        i = x;
        while (--i>=0)
        {   
            if(a[x] > a[i])
            {
                a[x] += a[i];
                a[i] = a[x] - a[i];
                a[x] -= a[i];
            }
        }   
    }  
}

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

void main(void)
{
    int tam;
    printf("tamanio: ");
    scanf("%d", &tam);
    int a[tam];
    pedirArreglo(a, tam);
    imprimeArreglo(a, tam);
    ordenar(a, tam);
    imprimeArreglo(a, tam); 
}