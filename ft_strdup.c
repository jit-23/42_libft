/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 17:59:28 by fde-jesu          #+#    #+#             */
/*   Updated: 2023/04/21 18:20:22 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	len;
	unsigned char	*ptr;
	char	*str;

	str = (char *)s;
	len = ft_strlen(str);
	i = 0;
	if (!(ptr = (unsigned char *)malloc(sizeof(unsigned char *) * len + 1)))
		return (0);
	while (i < len)
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int main()
{
	char *name = "fernando";
	char *ptr;
	ptr = ft_strdup(name);
	printf("%s",ptr);	
	free(ptr);
	return (0);
}*/
