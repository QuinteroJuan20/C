#include <stdio.h>
#include <assert.h>

struct div_t {int cociente;int resto;};

struct div_t division(int x, int y)
{
    struct div_t res;
    res.cociente = x/y;
    res.resto = x%y;
    return res;
}

int main(void)
{
    int x, y;
    printf("a:");
    scanf("%d", &x);
    printf("b:");
    scanf("%d", &y);
    assert (y != 0);
    struct div_t res =  division(x, y);
    printf("cociente: %d\n resto: %d\n", res.cociente, res.resto);
}
