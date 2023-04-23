/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 20:12:30 by fde-jesu          #+#    #+#             */
/*   Updated: 2023/04/23 20:38:52 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	char *sorc;
	sorc = (char *)src;
	i = 0;
	if (size == 0)
		return (ft_strlen(sorc));
	while (sorc[i] && i < size - 1)
	{
		sorc[i] = dst[i];
		i++;	
	}
	dst[i] = '\0';
	return (ft_strlen(sorc));
}



int main()
{
        char name1 [] = "fernando";
        char name2 [10];
        //unsigned int size;
        //size = 30;
        ft_strlcpy(name2,name1,10);
        printf("%s",name2);

        return 0;
}

