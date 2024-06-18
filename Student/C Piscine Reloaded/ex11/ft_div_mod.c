#include <unistd.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
*div = a / b;
*mod = a % b;
}

/*int main(void)
{
    int a;
    int b;
    int div, mod;
    a = 10;
    b = 5;
    div = 0;
    mod = 0;
    ft_div_mod(a, b, &div, &mod);
    write(1,&div,1);
    return(0);
}/*