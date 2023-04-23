#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)b;
	while (i < len)
	{
		ptr[i] = (unsigned char )c;
		i++;
	}
	return (b);
}/*
int main()
{
	char n[] = "fernando";
	char a = 'a';
	ft_memset(n,a,3);
	printf("%s",n);
       return(0);
}*/
