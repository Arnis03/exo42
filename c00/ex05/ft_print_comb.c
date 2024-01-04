#include <unistd.h>

void ft_print_comb( void )
{
    char i;
    char j;
    char k;

    for (i = '0'; i <= '9'; i++)
    {
        for (j = '0'; j <= '9'; j++)
        {
            for (k = '0'; k <= '9'; k++)
            {
                if (i != j && i != k && j != k)
                {
                    write(1, &i, 1);
                    write(1, &j, 1);
                    write(1, &k, 1);
                    write(1, " ", 1);
                }
            }
        }
    }
}