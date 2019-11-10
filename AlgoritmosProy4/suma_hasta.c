#include <stdio.h>
#include <assert.h>

int suma_hasta(int n){
    int x=0;
    while(n){
        x +=n;
        n --;
    }
    return x;
}

int main(void)
{
    printf("A_");
    int x;
    printf("n:");
    scanf("%d", &x);
    assert (x > 0);
    printf("resultado: %d\n", suma_hasta(x));
}
