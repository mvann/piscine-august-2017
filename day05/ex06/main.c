#include <unistd.h>
#include "ft_strcmp.c"

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
	char *str1 = "This is a test boi";
	char *str2 = "This is a test sentence.";

	ft_putstr(str1);
	ft_putchar('\n');
	ft_putstr(str2);
	ft_putchar('\n');
	ft_putnbr(ft_strcmp(str1, str2));
	ft_putstr("... next: \n");
	str1 = "";
	str2 = "";
	ft_putstr(str1);
	ft_putchar('\n');
	ft_putstr(str2);
	ft_putchar('\n');
	ft_putnbr(ft_strcmp(str1, str2));
	ft_putstr("... next: \n");
	str1 = "hello";
	str2 = "hello";
	ft_putstr(str1);
	ft_putchar('\n');
	ft_putstr(str2);
	ft_putchar('\n');
	ft_putnbr(ft_strcmp(str1, str2));
	ft_putstr("... next: \n");
	str1 = "What's good?";
	str2 = "sup";
	ft_putstr(str1);
	ft_putchar('\n');
	ft_putstr(str2);
	ft_putchar('\n');
	ft_putnbr(ft_strcmp(str1, str2));
	ft_putstr("... next: \n");
}
