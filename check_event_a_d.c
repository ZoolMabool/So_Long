/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_event_a_d.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 11:55:41 by ybaudoui          #+#    #+#             */
/*   Updated: 2022/06/29 11:55:43 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "proto.h"

void	ft_check_event_a_2(t_data *data)
{
	if (data->map[data->move.y][data->move.x] == '0'
		|| data->map[data->move.y][data->move.x] == 'P')
		ft_put_move(data);
	else
		ft_put_chest(data);
	data->move.x -= 1;
	ft_put_chest_a(data);
	if (data->map[data->move.y][data->move.x] == 'C')
	{
		data->map[data->move.y][data->move.x] = 'c';
		data->count--;
		if (data->count == 0)
			ft_open_door(data);
	}
}

void	ft_check_event_a_4(t_data *data)
{
	if (data->map[data->move.y][data->move.x] == '0'
		|| data->map[data->move.y][data->move.x] == 'P')
		ft_put_move(data);
	else
		ft_put_chest(data);
	data->move.x -= 1;
	ft_put_chest_empty_a(data);
}

void	ft_check_event_d_2(t_data *data)
{
	if (data->map[data->move.y][data->move.x] == '0'
		|| data->map[data->move.y][data->move.x] == 'P')
		ft_put_move(data);
	else
		ft_put_chest(data);
	data->move.x += 1;
	ft_put_chest_d(data);
	if (data->map[data->move.y][data->move.x] == 'C')
	{
		data->map[data->move.y][data->move.x] = 'c';
		data->count--;
		if (data->count == 0)
			ft_open_door(data);
	}
}

void	ft_check_event_d_4(t_data *data)
{
	if (data->map[data->move.y][data->move.x] == '0'
		|| data->map[data->move.y][data->move.x] == 'P')
		ft_put_move(data);
	else
		ft_put_chest(data);
	data->move.x += 1;
	ft_put_chest_empty_d(data);
}
