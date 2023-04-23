/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 23:38:04 by fde-jesu          #+#    #+#             */
/*   Updated: 2023/04/23 20:25:59 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
	char *dst1;
	char *src1;

	size_t i;
	size_t len;
	size_t len_d;
	size_t len_s;

	i = 0;
	len_s = 0;
	len_d = 0;

	dst1 = (char *)dst;
	src1 = (char *)src;
	
	len_d = ft_strlen(dst1);
	printf("len of d = %zu\n",len_d);
	
	len_s = ft_strlen(src1);
	printf("len of s = %zu\n",len_s);
	
	if (size > len_d)
		len = len_d + len_s;
	else
		len = len_s + size;
	while (src[i] && len_d + 1 < size)
	{
		dst1[len_d] =  src1[i];
		i++;
		len_d++;
	}
	dst1[len_d] = '\0';
	return (len);
}

int main()
{
	char name1 [50] = "fernando ";
	char name2 [50] = "lucart";
	unsigned int size;
	size = 30;
	ft_strlcat(name1,name2,30);
        printf("%s",name1);

	return 0;
	}
