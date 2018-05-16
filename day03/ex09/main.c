#include <unistd.h>
#include "ft_sort_integer_table.c"

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}

void	ft_putnbr(int nb)
{
	if (nb <= 9 && nb * -1 <= 9 && nb != -2147483648)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = nb * -1;
		}
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		if (nb < 0)
		{
			nb = nb * -1;
		}
		if (nb == -2147483648)
		{
			nb = 8;
		}
		ft_putnbr(nb % 10);
	}
}

int		main()
{
	int tab[] = {3,4,6,1,7,3,87,32,56,87,2,7,2,76,89,34,7,45,23,23,5,7,35,476,8};
	
	int size = 25;
	ft_sort_integer_table(tab, size);
	int i = 0;
	while (i < size){
		ft_putnbr(tab[i]);
		ft_putchar(',');
		ft_putchar(' ');
		i++;
	}
	return(0);
}
