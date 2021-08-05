#ifndef HELPERS_H
#define HELPERS_H

# include <unistd.h>
# include <stdlib.h>

int		ft_putchar(char c);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
void	ft_putnbr_base(int nbr, char *base);
void	ft_putnbr(int nbr);
char	*itoa_base(unsigned long long n, char *base);

#endif
