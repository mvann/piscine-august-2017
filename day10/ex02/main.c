#include <unistd.h>
#include "../ex01/ft_foreach.c"

void	ft_foreach(int *tab, int length, void (*f)(int));

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
	ft_putchar('\n');
}

int		*ft_map(int *tab, int length, int(*f)(int));

int		ft_square(int n)
{
	return (n * n);
}

int		main()
{
	int tab[7] = {1,2,3,23,54,23,2};

	int *out = ft_map(tab, 7, ft_square);
	ft_foreach(out, 7, &ft_putnbr);
}
