#include "ft_stock_par.h"

int     ft_strl(char *str)
{
    int     count;

    count = 0;
    while(*str++)
        count++;
    return (count);
}

char    *ft_strdup(char *str)
{
    char    *result;
    int     len;
    int     i;

    i = 0;
    len = 0;
    len = ft_strl(str);
    result = (char *)malloc(sizeof(char) * (len + 1));
    if (!result)
        return NULL;
    while(str[i] != '\0')
    {
        result[i] = str[i];
        i++;
    }
    result[i] = '\0';
    return (result);
}

struct  s_stock_par *ft_param_to_tab(int ac, char **av)
{
    int     i;
    t_stock_par *result;

    i = 0;
    result = (t_stock_par *)malloc(sizeof(t_stock_par) * (ac - 1) + 1);
    if (!result)
        return (NULL);
    while (++i < ac)
    {
        result[i - 1].size_param = ft_strl(av[i]);
        result[i - 1].str = av[i];
        result[i - 1].copy = ft_strdup(av[i]);
        result[i - 1].tab = ft_split_whitespaces(av[i]);
    }
    result[i - 1].str = NULL;
    return (result);
}