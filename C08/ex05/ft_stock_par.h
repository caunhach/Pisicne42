#include<stdlib.h>

#ifndef FT_STOCK_PAR_H
#define FT_STOCK_PAR_H

int     ft_strl(char *str);

char    *ft_strdup(char *str);

typedef struct s_stock_par
{
    int size_param;
    char *str;
    char *copy;
    char **tab;
}       t_stock_par;

char    **ft_split_whitespaces(char *str);

struct  s_stock_par *ft_param_to_tab(int ac, char **av);

#endif