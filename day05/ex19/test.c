#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main ()
{
	char str1[]= "To be or not";
	char str2[] = "Destination is here now";

	int size = sizeof(str2);

 /* copy to sized buffer (overflow safe): */
	strncpy ( str2, str1, 5 );

	int i = 0;
	while(i < size)
	{
		ft_putchar(str2[i]);
		ft_putchar('#');
		ft_putchar('\n');
		i++;
	}
	puts (str1);
	puts (str2);

	return 0;
}
