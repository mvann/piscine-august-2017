#include <unistd.h>

int		ft_is_sort(int *tab, int length, int (*f)(int, int));

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

int		ft_int_cmp(int a, int b)
{
	return (a - b);
}

int		ft_square(int n)
{
	return (n * n);
}

int		main()
{
	int tab[2] = {-97243, 42};

	ft_putnbr(ft_is_sort(tab, 2, &ft_int_cmp));
	return (0);
}
