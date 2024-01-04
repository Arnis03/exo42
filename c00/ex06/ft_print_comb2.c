#include <unistd.h>

void ft_print_comb2( void )
{
    char i;
    char j;
    char k;
    char l;

    for (i = '0'; i <= '9'; i++)
    {
        for (j = '0'; j <= '9'; j++)
        {
            for (k = '0'; k <= '9'; k++)
            {
                for (l = '0'; l <= '9'; l++)
                {
                    write(1, &i, 1);
                    write(1, &j, 1);
                    write(1, " ", 1);
                    write(1, &k, 1);
                    write(1, &l, 1);
                    write(1, "\n", 1);
                }
            }
            
        }
    }
}