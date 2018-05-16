#include <unistd.h>
#include "ft_putnbr.c"

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}

int		main()
{
	ft_putnbr(9);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(-1);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
}
