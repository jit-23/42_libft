/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:20:47 by fde-jesu          #+#    #+#             */
/*   Updated: 2023/04/21 14:21:07 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	chr;

	str = (unsigned char *)s;
	chr = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == chr)
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*
int main()
{
		char *name = "fernando";
		char a =  'n';
		char *ptr;
		ptr = ft_memchr(name, a, 5);
		printf("%s", ptr);
		return (0);
}*/
