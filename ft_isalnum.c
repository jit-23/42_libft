
#include<stdio.h>
#include<ctype.h>
int	ft_isalnum(int a)
{
	if (a >= '0' && a <= '9')
		return (1);
	else if (a >= 'A' && a <= 'Z')
		return (1);
	else if (a >= 'a' && a <= 'z')
		return (1);
	return (0);
}
/*
int main()
{

	printf("%d.", ft_isalnum('y'));
	printf("%d", isalnum('y'));
	return (0);
}*/
