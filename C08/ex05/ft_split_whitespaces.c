#include<stdlib.h>

int     ft_str_len(char *str)
{
    int len;

    len = 0;
    while(*str)
    {
        if (*str == '\n' || *str == '\t' || *str == ' ' )
            break;
        len++;
        str++;
    }
    return (len);
}

char    *ft_dup_args(char *str)
{
    int i;
    int len;
    char *dest;

    i = 0;
    len = 0;
    len = ft_str_len(str);
    dest = (char *)malloc(sizeof(char) * (len + 1));
    while(str[i] != '\0')
    {
        if (str[i] == '\n' || str[i] == '\t' || str[i] == ' ' )
            break;
        dest[i] = str[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int     ft_count_args(char *str)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while(str[i + 1] != '\0')
    {
        if (i == 0 && !(str[i] == '\n' && str[i] == '\t' || str[i] == ' ' ))
            count += 1;
        else if (str[i] == '\n' || str[i] == '\t' || str[i] == ' ')
        {
            if (!(str[i + 1] == '\n' || str[i + 1] == '\t' || str[i + 1] == ' '))
                count += 1;
        }
        i++;
    }

    return (count);
}

int     ft_is_begin(char *str, int i)
{
        if (i == 0 && !(str[i] == '\n' && str[i] == '\t' || str[i] == ' ' ))
            return(1);
        else if (!(str[i] == '\n' && str[i] == '\t' || str[i] == ' ' ))
        {
            if (str[i - 1] == '\n' || str[i - 1] == '\t' || str[i - 1] == ' ')
                return (1);
        }
        return (0);
}

char    **ft_split_whitespaces(char *str)
{
    int i_str;
    int i;
    int len;
    char **dest;

    i_str = 0;
    i = 0;
    len = 0;
    len = ft_count_args(str);
    dest = (char **)malloc(sizeof(char *) * len + 1);
    while (i < len)
    {
        if (ft_is_begin(str, i_str))
        {
            dest[i] = (char *)malloc(sizeof(char) * (ft_str_len(str + i_str) + 1));
            dest[i] = ft_dup_args(str + i_str);
            i++;
        }       
        i_str++; 
    }
    dest[i] = 0;
    return (dest);
}