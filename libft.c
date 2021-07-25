#include "libft.h"

int	is_empty(char	*str);

int ft_isalpha(int argument)
{
    int	init_lcase_alphabet;
	int	end_lcase_alphabet;
	int	init_ucase_alphabet;
	int	end_ucase_alphabet;

	init_lcase_alphabet = 97;
	end_lcase_alphabet = 122;
	init_ucase_alphabet = 65;
	end_ucase_alphabet = 90;
	if (argument >= init_lcase_alphabet && argument <= end_lcase_alphabet)
		return (2);
	else if (argument >= init_ucase_alphabet && argument <= end_ucase_alphabet)
		return (1);
	else
		return (0);
}

int	is_empty(char	*str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int ft_isdigit(int  argument)
{
    return argument;
}

int ft_isalnum(int  argument)
{
    return argument;
}

int ft_isascii(int  argument)
{
    return argument;
}

int ft_isprint(int  argument)
{
    return argument;
}

int ft_strlen(int  argument)
{
    return argument;
}

int ft_memset(int  argument)
{
    return argument;
}

int ft_bzero(int  argument)
{
    return argument;
}

int ft_memcpy(int  argument)
{
    return argument;
}

int ft_memmove(int  argument)
{
    return argument;
}

int ft_strlcpy(int  argument)
{
    return argument;
}

int ft_strlcat(int  argument)
{
    return argument;
}

int ft_toupper(int  argument)
{
    return argument;
}

int ft_tolower(int  argument)
{
    return argument;
}

int ft_strchr(int  argument)
{
    return argument;
}

int ft_strrchr(int  argument)
{
    return argument;
}

int ft_strncmp(int  argument)
{
    return argument;
}

int ft_memchr(int  argument)
{
    return argument;
}

int ft_memcmp(int  argument)
{
    return argument;
}

int ft_strnstr(int  argument)
{
    return argument;
}

int ft_atoi(int  argument)
{
    return argument;
}