#include <unistd.h>

void ft_print_reverse_alphabet( void )
{
    for (char car = 'z'; car >= 'a'; car--)
    {
        write(1, &car, 1);
    }
}