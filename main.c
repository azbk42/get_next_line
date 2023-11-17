/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azbk <azbk@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:16:03 by azbk              #+#    #+#             */
/*   Updated: 2023/11/17 18:22:17 by azbk             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	int		fd;
	char	*line;

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
