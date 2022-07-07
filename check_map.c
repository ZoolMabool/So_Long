/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 10:37:15 by ybaudoui          #+#    #+#             */
/*   Updated: 2022/06/30 08:36:49 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "proto.h"

int	ft_check_map_s(t_data *data, int i, int j)
{
	j = data->move.x;
	i = data->move.y;
	if (data->map[i + 1][j] == '1' ||
		(data->map[i + 1][j] == 'E' && data->count > 0))
		return (1);
	else if (data->map[i + 1][j] == 'E' && data->count == 0)
		return (5);
	else if (data->map[i + 1][j] == 'c')
		return (4);
	else if (data->map[i + 1][j] == 'C' || data->map[i + 1][j] == 'c')
		return (2);
	else if (data->map[i][j] == 'c')
		return (3);
	else
		return (0);
}

int	ft_check_map_w(t_data *data, int i, int j)
{
	j = data->move.x;
	i = data->move.y;
	if (data->map[i - 1][j] == '1' ||
		(data->map[i - 1][j] == 'E' && data->count > 0))
		return (1);
	else if (data->map[i - 1][j] == 'E' && data->count == 0)
		return (5);
	else if (data->map[i - 1][j] == 'c')
		return (4);
	else if (data->map[i - 1][j] == 'C' || data->map[i - 1][j] == 'c')
		return (2);
	else if (data->map[i][j] == 'c')
		return (3);
	else
		return (0);
}

int	ft_check_map_d(t_data *data, int i, int j)
{
	j = data->move.x;
	i = data->move.y;
	if (data->map[i][j + 1] == '1' ||
		(data->map[i][j + 1] == 'E' && data->count > 0))
		return (1);
	else if (data->map[i][j + 1] == 'E' && data->count == 0)
		return (5);
	else if (data->map[i][j + 1] == 'c')
		return (4);
	else if (data->map[i][j + 1] == 'C' || data->map[i][j + 1] == 'c')
		return (2);
	else if (data->map[i][j] == 'c')
		return (3);
	else
		return (0);
}

int	ft_check_map_a(t_data *data, int i, int j)
{
	j = data->move.x;
	i = data->move.y;
	if (data->map[i][j - 1] == '1' ||
		(data->map[i][j - 1] == 'E' && data->count > 0))
		return (1);
	else if (data->map[i][j - 1] == 'E' && data->count == 0)
		return (5);
	else if (data->map[i][j - 1] == 'c')
		return (4);
	else if (data->map[i][j - 1] == 'C' || data->map[i][j - 1] == 'c')
		return (2);
	else if (data->map[i][j] == 'c')
		return (3);
	else
		return (0);
}
