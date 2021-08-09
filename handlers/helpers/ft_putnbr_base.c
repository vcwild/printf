#include "helpers.h"

static int		ft_base_size(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' ||
			base[i] == '-' ||
			base[i] < 32 ||
			base[i] > 126)
			return (0);
		j = 1;
		while (base[i + j] != '\0')
		{
			if (base[i] == base[i + j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	base_size;
	int	nbr_conv[100];

	i = 0;
	base_size = ft_base_size(base);
	if (base_size == 0)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	while (nbr)
	{
		nbr_conv[i] = nbr % base_size;
		nbr = nbr / base_size;
		i++;
	}
	while (--i >= 0)
		ft_putchar(base[nbr_conv[i]]);
}
