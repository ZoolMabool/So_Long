/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:48:43 by ybaudoui          #+#    #+#             */
/*   Updated: 2022/07/06 12:04:50 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "proto.h"

int	map_width(int fd)
{
	char	*line;
	int		width;

	line = get_next_line(fd);
	if (line == NULL)
		return (0);
	width = ft_strlen(line) - 1;
	free(line);
	return (width);
}

int	map_height(int fd)
{
	char		*line;
	int			height;
	size_t		size;
	int			error;

	error = 0;
	height = 1;
	line = get_next_line(fd);
	size = ft_strlen(line);
	while (line != NULL)
	{
		if (ft_strlen(line) != size)
			error = 1;
		free(line);
		line = get_next_line(fd);
		height++;
	}
	if (error == 0)
		return (height);
	return (-1);
}

void	fill_map(int fd, t_data *data)
{
	char	*line;
	int		i;

	line = NULL;
	i = 0;
	data->map = malloc(sizeof(char *) * (data->size_map.width));
	line = get_next_line(fd);
	while (line != NULL)
	{
		data->map[i] = line;
		i++;
		line = get_next_line(fd);
	}
}
