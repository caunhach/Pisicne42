#include<stdio.h>
#include "ft_stock_par.h"

char    **ft_split_whitespaces(char *str);

void    ft_print_stock(t_stock_par *stock, char **av)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while(stock[i].str != 0)
    {
        j = 0;
        printf("No. %d :\n", i);
        printf("size_ param %d\n", stock[i].size_param);
        printf("str %p av[%d] %p\n", stock[i].str, (i + 1), av[i + 1]);
        printf("copy %s\n", stock[i].copy);
        while(stock[i].tab[j] != 0)
        {
            printf("%s ", stock[i].tab[j]);
            j++;
        }
        printf("\n");
        i++;
    }
}

int main(int ac, char **av)
{
    t_stock_par *stock;

    stock = ft_param_to_tab(ac, av);
    ft_print_stock(stock, av);
    free(stock);
}