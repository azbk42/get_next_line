/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azbk <azbk@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:15:36 by azbk              #+#    #+#             */
/*   Updated: 2023/11/17 18:22:15 by azbk             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	int		fd0;
	int		fd1;
	int		fd2;
	char	*line;
	int		nb;

	nb = 1;
	if (ac < 2)
	{
		printf("pls write : ./a.out [file_name]");
		return (1);
	}
	fd0 = open(av[1], O_RDONLY);
	fd1 = open(av[2], O_RDONLY);
	fd2 = open(av[3], O_RDONLY);
	printf("BUFFER SIZE = %d\n", BUFFER_SIZE);
	while (line)
	{
		line = get_next_line(fd0);
		printf("fd0\t[%d Appel] ==> %s        \t\t\t   **\n", nb, line);
		free(line);
		line = get_next_line(fd1);
		printf("fd1\t[%d Appel] ==> %s        \t\t\t   **\n", nb, line);
		free(line);
		line = get_next_line(fd2);
		printf("fd2\t[%d Appel] ==> %s        \t\t\t   **\n", nb, line);
		nb++;
	}
	free(line);
	printf("\n*************************************\n\n");
	close(fd0);
	close(fd1);
	close(fd2);
}
