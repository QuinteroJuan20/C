#include <stdio.h>
#include <assert.h>
#include <math.h>

int es_primo(int x){
    int i=2, res=1;
    while(i<x && res){
        res= res && (x%i!=0);
        i++;
    }
    return res;
}

int iesimo_primo(int n){
    int x=1, i=0;
    while(i<n){
        x++;
        if(es_primo(x)) i++;
    }
    return x;
}

int main(void)
{
    int x;
    printf("A-n:");
    scanf("%d", &x);
    assert (x > 0);
    printf("resultado: %d\n", iesimo_primo(x));
    do{
        printf("B-n (debe ser mayor a 0):");
        scanf("%d", &x);
        if(x>0) printf("resultado: %d\n", iesimo_primo(x));
    }while(x<0);
}
