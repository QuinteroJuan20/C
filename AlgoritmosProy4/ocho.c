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

int existe_positivo(int a[], int n_max)
{
    while (--n_max>=0)
    {
        if(a[n_max]>0) return 1;
    }
    return 0;
}

int todos_positivos(int a[], int n_max)
{
    int x=1;
    while (--n_max>=0)
    {
        x = (a[n_max]>0) && x;
    }
    return x;
}


int main(void)
{
    int tam, d=0;
    printf("tamanio: ");
    scanf("%d", &tam);
    int a[tam];
    pedirArreglo(a, tam);
    imprimeArreglo(a, tam);
    printf("existe_positivo - 1\ntodos_positivos - 2\n");
    printf("opcion: ");
    scanf("%d", &d);
    if(d==2)
    {
        if (todos_positivos(a, tam))
        {
            printf("Todos son positivos\n");    
        }
        else
        {
            printf("Existe un elemento negativo en el arreglo\n");
        }
    }
    else
    {
        if (existe_positivo(a, tam))
        {
            printf("Existe un elemento positivo en el arreglo\n");    
        }
        else
        {
            printf("Todos son negativos\n");
        }
    }
}
