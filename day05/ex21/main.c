#include <unistd.h>
#include "ft_atoi_base.c"

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

	ft_putstr("012345678");
	ft_putchar('\n');
	ft_putnbr(ft_atoi_base("121", "012345678"));
	ft_putchar('\n');

	ft_putstr("abcdefghi");
	ft_putchar('\n');
	ft_putnbr(ft_atoi_base("bcb", "abcdefghi"));
	ft_putchar('\n');

	ft_putstr("empty str");
	ft_putchar('\n');
	ft_putnbr(ft_atoi_base("", "012345678"));
	ft_putchar('\n');

	ft_putstr("empty base and string");
	ft_putchar('\n');
	ft_putnbr(ft_atoi_base("", ""));
	ft_putchar('\n');

	ft_putstr("str contains char not in base");
	ft_putchar('\n');
	ft_putnbr(ft_atoi_base("abc", "012345678"));
	ft_putchar('\n');

	ft_putstr("negative");
	ft_putchar('\n');
	ft_putnbr(ft_atoi_base("-121", "012345678"));
	ft_putchar('\n');

}
