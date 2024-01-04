#include <unistd.h>

void ft_print_alphabet( void )
{
    for (char car = 'a'; car <= 'z'; car++)
    {
        write(1, &car, 1);
    }
}