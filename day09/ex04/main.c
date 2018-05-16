#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

char	*ft_rot42(char *str);

int		main()
{
	char str[] = "hello";
	ft_putstr(ft_rot42(str));
}
