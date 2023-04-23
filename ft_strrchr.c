/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 00:36:25 by fde-jesu          #+#    #+#             */
/*   Updated: 2023/04/23 21:10:25 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
        int     i;
        char    *ptr;
        ptr = (char *)s;
        i = ft_strlen(ptr);
	while (i > 0)
        {
                if (ptr[i] == c)
                        return (&ptr[i]);
                i--;
        }
        return (0);
}
/*
int main()
{
        char *name = "fernando";
        char a = 'z';
        char *ptr;
        ptr = strrchr(name, a);
        printf("%s", ptr);
}*/
