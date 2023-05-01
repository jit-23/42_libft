/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 19:04:38 by fde-jesu          #+#    #+#             */
/*   Updated: 2023/05/01 19:04:41 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}

//  int main()
//  {
//     char string[] = "there is a tring here";
//     int fd;
//     fd = open("somefile.txt", O_RDWR);
// 	ft_putendl_fd(string, fd);
//     close(fd); 
//     return (0);
//  }
