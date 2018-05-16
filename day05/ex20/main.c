#include <unistd.h>
#include "ft_putnbr_base.c"

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
		ft_putchar(*str++);
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

	ft_putstr("0123456789ABCDEF");
	ft_putchar('\n');
	ft_putnbr_base(1000, "0123456789ABCDEF");
	ft_putchar('\n');

	ft_putstr("01234567");
	ft_putchar('\n');
	ft_putnbr_base(1000, "01234567");
	ft_putchar('\n');

	ft_putstr("0123456");
	ft_putchar('\n');
	ft_putnbr_base(1000, "0123456");
	ft_putchar('\n');

	ft_putstr("012345");
	ft_putchar('\n');
	ft_putnbr_base(1000, "012345");
	ft_putchar('\n');
	
	ft_putstr("empty");
	ft_putchar('\n');
	ft_putnbr_base(1000, "");
	ft_putchar('\n');

}
