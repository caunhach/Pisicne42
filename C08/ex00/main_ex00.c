#include<stdio.h>

int     ft_str_len(char *str);

char    *ft_dup_args(char *str);

int     ft_count_args(char *str);

int     ft_is_begin(char *str, int i);

char    **ft_split_whitespaces(char *str);

int main()
{
    int i;
    char str[] ="Last Word is Silence D";
    char **dest;

    dest = ft_split_whitespaces(str);
    printf("There are %d arguments\n", ft_count_args(str));
    for (i = 0; i < 5; i++)
        printf("%s\n", dest[i]);
    printf("%p\n", dest[5]);
    printf("The length of current argument is %d \n", ft_str_len(str + 10));
    printf("The current string is %s\n", ft_dup_args(str + 10));
    printf("%d\n", ft_is_begin(str, 1));
}