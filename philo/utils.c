#include "philo.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i ++;
	return (i);
}

long	ft_atoi(const char *str)
{
	int			i;
	int			neg;
	long		nb;

	i = 0;
	nb = 0;
	while (str[i])
	{
		nb = nb * 10 + str[i] - 48;
		i ++;
	}
	return (nb);
}
