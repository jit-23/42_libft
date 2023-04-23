/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 18:20:58 by fde-jesu          #+#    #+#             */
/*   Updated: 2023/04/21 18:39:29 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
	void *ptr;

	if(!(ptr = (void *) malloc(nmemb * size)))
		return (0);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
	
}
/*
int main()
{
	char a[5];
	char *ptr;
	ptr = ft_calloc(5, sizeof(char));
	printf("%s",ptr);
	return (0);
}*/
