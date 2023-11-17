/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azbk <azbk@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 23:40:50 by mmourdal          #+#    #+#             */
/*   Updated: 2023/11/17 13:57:24 by azbk             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>


int	main(int ac, char **av)
{
	int		fd;
	char *line;

	if (ac != 2)
	{
		printf("pls write : ./a.out [file_name]");
		return (1);
	}
	fd = open(av[1], O_RDONLY);
	printf("BUFFER SIZE = %d\n", BUFFER_SIZE);
	
	line = get_next_line(fd);
	while (line)
	{
		printf("%s", line);
		free(line);
		line = get_next_line(fd);
	}
	free(line);
	close(fd);
	
}
