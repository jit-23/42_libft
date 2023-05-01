/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 23:01:59 by fde-jesu          #+#    #+#             */
/*   Updated: 2023/04/26 18:55:47 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	len_s;

	len_s = ft_strlen(s);
	i = 0;
	if (len_s < start)
	{
		ptr = (char *)malloc(1);
		ptr[i] = '\0';
		return (ptr);
	}
	ptr = (char *)malloc(sizeof(char) * len + 1);
	if (!ptr)
		return (0);
	while (i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
