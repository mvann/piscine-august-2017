#include <unistd.h>
#include "ft_strcat.c"

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}

void	ft_putstr(char *str)
{
	ft_putchar('#');
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
	char str1[50];
	char str2[] = "ur boi";
	char str3[] = "It is ";

	int i = 0;
	while (str3[i] != '\0')
	{
		str1[i] = str3[i];
		i++;
	}

	ft_putstr(str1);
	ft_putchar('\n');
	ft_putstr(str2);
	ft_putchar('\n');
	ft_putstr(ft_strcat(str1, str2));
	return (0);
}
