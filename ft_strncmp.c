/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 21:10:54 by fde-jesu          #+#    #+#             */
/*   Updated: 2023/04/23 21:10:55 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char *str1; 
	char *str2;
	size_t	i;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (str1[i] && str2[i] && i < n)
	{
		if (str1[i] > str2[i])
			return (1);
		if (str1[i] < str2[i])
			return (-1);
		i++;
	}
	return (0);
}
/*
int main()
{
	char *name1 = "fernando";
	char *name2 = "fernaNdo";
	printf("%d",ft_strncmp(name1,name2, 4));
	
}*/
