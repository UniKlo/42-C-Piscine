#include <unistd.h>

int ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

void	ft_print_comb(void)
{
	char i;
	char j;
	char k;

	i = '0';
	j = '1';
	k = '2';
	
	
	while (i <= '9')
	{
		while (j <= '9')
		{
			while (k <= '9')
			{
				if (i != j && j != k && i != k)
				{
					ft_putchar(i);
					ft_putchar(j);
					ft_putchar(k);
					
					if (i < '7')
					{
					
					    ft_putchar(',');
					    ft_putchar(' ');
					}
				}
				k++;
			}
			j++;
			k = j;
		}
		i++;
		j = i;
	}
	

}
int main(void)
{
    ft_print_comb();    
    return 0;
}
