/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 15:47:30 by fde-jesu          #+#    #+#             */
/*   Updated: 2023/04/21 16:44:28 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sinal;
	int	result;
	unsigned char	*str;

	result = 0;
	sinal = 1;
	i = 0;
	str = (unsigned char *)nptr;
	if (str[0] == '-')
	{
		sinal = -sinal;
		i++;
	}
	if (str[0] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		result = result * 10 + str[i++] - '0';
	return (sinal * result);

}
/*
int main()
{
	//printf("%d", ft_atoi("234"));
	printf("%d", ft_atoi("-2147483648"));

	return (0);
}*/
