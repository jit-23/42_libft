/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 20:07:09 by fde-jesu          #+#    #+#             */
/*   Updated: 2023/04/26 22:17:44 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*str;

	if (!s1 || !set)
		return (0);
	i = 0;
	j = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]) != NULL && i < j)
		i++;
	if (i < j)
		strdup(set);
	while (ft_strchr(set, s1[j]) != NULL && j >= 0)
		j--;
	str = (char *)malloc(sizeof(char) * (j - i) + 2);
	if (!str)
		return (0);
	printf("%lu", sizeof(str));
	ft_strlcpy(str, &s1[i], j - i + 2);
	return (str);
}

// int main()
// {
// 	char s1[] = "XXXFERXXX";
// 	char s2[] = "XXX";
// 	char	*ptr;
// 	ptr = ft_strtrim(s1,s2);
// 	int i = 0;
// 	while(i < 10)
// 		printf("%c\n",ptr[i++]);
// 	free(ptr);
// 	return (0);
// }