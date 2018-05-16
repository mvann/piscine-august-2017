#include <unistd.h>
#include "ft_strstr.c"

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
	char *dest;
	char src[] = "This is a test sentence.";

	int len = 0;
	while (src[len++] != '\0');
	
	ft_putstr(src);
	ft_putchar('\n');
	dest = ft_strstr(src, "is");
	ft_putstr(dest);
	ft_putchar('\n');
	ft_putstr(src);
	ft_putchar('\n');
}
