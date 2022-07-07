/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_event_w_s.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 08:59:51 by ybaudoui          #+#    #+#             */
/*   Updated: 2022/06/30 09:09:22 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "proto.h"

void	ft_check_event_w_2(t_data *data)
{
	if (data->map[data->move.y][data->move.x] == '0'
		|| data->map[data->move.y][data->move.x] == 'P')
		ft_put_move(data);
	else
		ft_put_chest(data);
	data->move.y -= 1;
	ft_put_chest_w(data);
	if (data->map[data->move.y][data->move.x] == 'C')
	{
		data->map[data->move.y][data->move.x] = 'c';
		data->count--;
		if (data->count == 0)
			ft_open_door(data);
	}
}

void	ft_check_event_w_4(t_data *data)
{
	if (data->map[data->move.y][data->move.x] == '0'
		|| data->map[data->move.y][data->move.x] == 'P')
		ft_put_move(data);
	else
		ft_put_chest(data);
	data->move.y -= 1;
	ft_put_chest_empty_w(data);
}

void	ft_check_event_s_2(t_data *data)
{
	if (data->map[data->move.y][data->move.x] == '0'
		|| data->map[data->move.y][data->move.x] == 'P')
		ft_put_move(data);
	else
		ft_put_chest(data);
	data->move.y += 1;
	ft_put_chest_s(data);
	if (data->map[data->move.y][data->move.x] == 'C')
	{
		data->map[data->move.y][data->move.x] = 'c';
		data->count--;
		if (data->count == 0)
			ft_open_door(data);
	}
}

void	ft_check_event_s_4(t_data *data)
{
	if (data->map[data->move.y][data->move.x] == '0'
		|| data->map[data->move.y][data->move.x] == 'P')
		ft_put_move(data);
	else
		ft_put_chest(data);
	data->move.y += 1;
	ft_put_chest_empty_s(data);
}
