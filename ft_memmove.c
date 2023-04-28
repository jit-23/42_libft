/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 20:10:47 by fde-jesu          #+#    #+#             */
/*   Updated: 2023/04/25 19:09:15 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	unsigned char	*ptr;
	size_t			i;

	str1 = (unsigned char *)src;
	str2 = (unsigned char *)dst;
	i = 0;
	ptr = (unsigned char *)malloc(n * sizeof(unsigned char *));
	if (ptr == NULL)
		return (0);
	while (i < n)
	{
		ptr[i] = str1[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		str2[i] = ptr[i];
		i++;
	}
	free(ptr);
	return (dst);
}
