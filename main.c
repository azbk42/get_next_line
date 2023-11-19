/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azbreak <azbreak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:16:03 by azbk              #+#    #+#             */
/*   Updated: 2023/11/19 17:21:57 by azbreak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

// int	main(int ac, char **av)
// {
// 	int		fd;
// 	char	*line;

// 	if (ac != 2)
// 	{
// 		printf("pls write : ./a.out [file_name]");
// 		return (1);
// 	}
// 	fd = open(av[1], O_RDONLY);
// 	printf("BUFFER SIZE = %d\n", BUFFER_SIZE);
// 	line = get_next_line(fd);
// 	while (line)
// 	{
// 		printf("%s", line);
// 		free(line);
// 		line = get_next_line(fd);
// 	}
// 	free(line);
// 	close(fd);
// }

// int main(void)
// {
//     char *line;
//     int i = 0;
    
//     printf("BUFFER SIZE = %d\n", BUFFER_SIZE);
//     line = get_next_line(0); // Utilisez 0 pour stdin
//     while (line && i < 1)
//     {
//         printf("%s\n", line);
//         free(line);
//         line = get_next_line(0); // Utilisez 0 pour stdin
//         i++;
//     }
//     free(line);

//     return (0);
// }
