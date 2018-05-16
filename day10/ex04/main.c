#include <unistd.h>
#include <stdlib.h>
int		ft_count_if(char **tab, int (*f)(char*));

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

int		has_a(char *s)
{
	while (*s)
		if (*s++ == 'a')
			return (1);
	return (0);
}

int		main(int argc, char **argv)
{
	char **boy;
	argc = 0;
	argv++;
	boy = (char **)malloc(sizeof(char*) * 3 + 1);
	int i = 0;
	while (i < 3)
	{
		boy[i] = argv[i];
		i++;
	}
	boy[i] = 0;
	ft_putnbr(ft_count_if(boy , &has_a));
	return (0);
}
