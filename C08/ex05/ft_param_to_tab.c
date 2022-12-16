#include<stdlib.h>

int ft_strl(char *str)
{
    int count;

    count = 0;
    while(*str++)
        count++;
    return (count);
}

struct s_stock_par *ft_param_to_tab(int ac, char **av)
{
    int i;
    s_stock_par *dest;

    i = 0;
    while (i < ac)
    {

    }
}