#include <stdio.h>

struct comp_t {int menores;int iguales;int mayores;};

struct comp_t check(int a[], int n_max, int x)
{
    struct comp_t res;
    res.menores = 0;
    res.iguales = 0;
    res.mayores = 0;
    while(n_max>=0)
    {
        if (a[n_max] < x)
        {
            res.menores ++;
        }
        else if(a[n_max] == x)
        {
            res.iguales ++;
        }
        else
        {
            res.mayores ++;
        }
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
    printf("n: ");
    scanf("%d", &n);
    struct comp_t res =  check(a, tam, n);
    imprimeArreglo(a, tam);
    printf("menores: %d\niguales: %d\nmayores: %d\n", res.menores, res.iguales, res.mayores);
}
