#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int test_ft_isalpha(void)
{
    int ret_ft_isalpha;
    int ret_isalpha;
    int idx;
    int int_errors_counter;

    char my_list_test[10] = { 'a', 'A', '9', '*', '%', '-', '0', 'W', 'Z'};

    idx = 0;
    int_errors_counter = 0;
    while (my_list_test[idx])
    {
        ret_ft_isalpha = ft_isalpha(my_list_test[idx]);
        ret_isalpha = isalpha(my_list_test[idx]);

        if (ret_ft_isalpha == ret_isalpha)
        {
            printf("\nTeste %i - \033[92m OK \033[0m", idx + 1);
        }
        else
        {
            printf("\n\nTeste %i - \033[91m KO \033[0m", idx + 1);
            printf("\n--Criterio: %c", my_list_test[idx]);
            printf("\n--isalpha:  \033[92m%i\033[0m", ret_isalpha);
            printf("\n--ft_isalpha: \033[91m%i\033[0m\n", ret_ft_isalpha);
            int_errors_counter++;
        }
        idx++;
    }
    return int_errors_counter;
}

int main(void)
{
    int ret_errors;

    ret_errors = 0;
    ret_errors = test_ft_isalpha();
    if (ret_errors == 0)
    {
        printf("\n\033[92mft_isalpha - OK\033[0m");
    }
    else
    {
        printf("\n\033[91mft_isalpha - Foram idenfitifados %i erros na funcao\033[0m", ret_errors);
    }
}