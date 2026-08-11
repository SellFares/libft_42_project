#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
		write(fd, &s[i++], 1);
}

/*
int	main()
{
	ft_putstr_fd("Ahla w sahla\n", 1);
}
*/
