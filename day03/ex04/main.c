#include <unistd.h>
#include "ft_ultimate_div_mod.c"

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
	int a = 10;
	int b = 3;
	int *ptr_a = &a;
	int *ptr_b = &b;
	ft_putnbr(a);
	ft_putnbr(b);
	ft_putchar(' ');
	ft_ultimate_div_mod(ptr_a, ptr_b);
	ft_putnbr(a);
	ft_putchar(',');
	ft_putnbr(b);
	return(0);
}
