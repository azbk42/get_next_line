/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azbk <azbk@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:15:11 by azbk              #+#    #+#             */
/*   Updated: 2023/11/17 18:22:09 by azbk             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] && s[i] != (char)c)
		i++;
	if (s[i] == (char)c)
		return (s);
	return (NULL);
}

size_t	ft_strlen(char *str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *buffer, char *str)
{
	char	*new_str;
	int		i;
	int		j;

	if (!buffer)
	{
		buffer = (char *)malloc(sizeof(char) * 1);
		if (!buffer)
			return (NULL);
		buffer[0] = '\0';
	}
	if (!str)
		return (NULL);
	new_str = malloc(sizeof(char) * (ft_strlen(buffer) + ft_strlen(str) + 1));
	if (!new_str)
		return (NULL);
	i = -1;
	while (buffer[++i])
		new_str[i] = buffer[i];
	j = 0;
	while (str[j])
		new_str[i++] = str[j++];
	new_str[i] = '\0';
	free(buffer);
	return (new_str);
}
