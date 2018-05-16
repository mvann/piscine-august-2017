#include <unistd.h>
#include "ft_atoi.c"

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

	ft_putnbr(ft_atoi("\t-256"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("--256"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("     256"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("234   "));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("   +234"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("\n0"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi(""));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("c2342"));
	ft_putchar('\n');
	return(0);
}
