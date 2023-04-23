/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:53:52 by fde-jesu          #+#    #+#             */
/*   Updated: 2023/04/23 21:11:43 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*hay;
	char	*needle;

	hay = (char *)big;
	needle = (char *)little;
	i = 0;
	j = 0;
	if (!needle)
		return (hay);
	while (hay[i] && i < len)
	{
		j = 0;
		while (hay[i + j] == needle[j] && needle[j] && hay[i + j] && i + j < len)
		{
			j++;
		}
		if (needle[j] == '\0')
			return (&hay[i]);
		i++;
	}
	return (hay);

}/*
int main()
{
	char name[] = "fernando";
	char name2[] = "er";
	printf("%s", ft_strnstr(name,name2,5));
	return (0);
}*/
