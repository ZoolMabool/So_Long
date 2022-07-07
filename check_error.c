/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 13:10:40 by ybaudoui          #+#    #+#             */
/*   Updated: 2022/07/06 11:50:20 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "proto.h"

int	check_error_map(t_data *data)
{
	int	i;
	int	j;

	i = -1;
	while (++i < data->size_map.height)
	{
		j = -1;
		while (++j < data->size_map.width)
			if (check_return_error(data, i, j) == 1)
				return (1);
	}
	if (data->nb_player != 1)
		return (1);
	if (data->nb_exit != 1)
		return (1);
	if (data->count < 1)
		return (1);
	return (0);
}

int	check_return_error(t_data *data, int i, int j)
{
	if (i == 0 && data->map[i][j] != '1')
		return (1);
	else if (i == data->size_map.height - 1 && data->map[i][j] != '1')
		return (1);
	else if ((j == 0 || j == data->size_map.width - 1)
		&& data->map[i][j] != '1')
		return (1);
	else if (data->map[i][j] == 'P')
		data->nb_player++;
	else if (data->map[i][j] == 'E')
		data->nb_exit++;
	else if (data->map[i][j] == 'C')
		data->count++;
	return (0);
}
