/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 08:59:36 by ybaudoui          #+#    #+#             */
/*   Updated: 2022/07/06 13:35:07 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "proto.h"

int	ft_event_s(t_data *data)
{
	if (ft_check_map_s(data, data->move.y, data->move.x) == 0)
	{
		ft_put_move(data);
		data->move.y += 1;
		ft_put_perso_d(data);
	}
	else if (ft_check_map_s(data, data->move.y, data->move.x) == 2)
		ft_check_event_s_2(data);
	else if (ft_check_map_s (data, data->move.y, data->move.x) == 3)
	{
		ft_put_chest(data);
		data->move.y += 1;
		ft_put_perso_d(data);
	}
	else if (ft_check_map_s(data, data->move.y, data->move.x) == 4)
		ft_check_event_s_4(data);
	else if (ft_check_map_s(data, data->move.y, data->move.x) == 5)
		ft_quit(data);
	else
		return (6);
	return (0);
}

int	ft_event_w(t_data *data)
{
	if (ft_check_map_w(data, data->move.y, data->move.x) == 0)
	{
		ft_put_move(data);
		data->move.y -= 1;
		ft_put_perso_u(data);
	}
	else if (ft_check_map_w(data, data->move.y, data->move.x) == 2)
		ft_check_event_w_2(data);
	else if (ft_check_map_w(data, data->move.y, data->move.x) == 3)
	{
		ft_put_chest(data);
		data->move.y -= 1;
		ft_put_perso_u(data);
	}
	else if (ft_check_map_w(data, data->move.y, data->move.x) == 4)
		ft_check_event_w_4(data);
	else if (ft_check_map_w(data, data->move.y, data->move.x) == 5)
		ft_quit(data);
	else
		return (6);
	return (0);
}

int	ft_event_a(t_data *data)
{
	if (ft_check_map_a(data, data->move.y, data->move.x) == 0)
	{
		ft_put_move(data);
		data->move.x -= 1;
		ft_put_perso_l(data);
	}
	else if (ft_check_map_a(data, data->move.y, data->move.x) == 2)
		ft_check_event_a_2(data);
	else if (ft_check_map_a(data, data->move.y, data->move.x) == 3)
	{
		ft_put_chest(data);
		data->move.x -= 1;
		ft_put_perso_l(data);
	}
	else if (ft_check_map_a(data, data->move.y, data->move.x) == 4)
		ft_check_event_a_4(data);
	else if (ft_check_map_a(data, data->move.y, data->move.x) == 5)
		ft_quit(data);
	else
		return (6);
	return (0);
}

int	ft_event_d(t_data *data)
{
	if (ft_check_map_d(data, data->move.y, data->move.x) == 0)
	{
		ft_put_move(data);
		data->move.x += 1;
		ft_put_perso_r(data);
	}
	else if (ft_check_map_d(data, data->move.y, data->move.x) == 2)
		ft_check_event_d_2(data);
	else if (ft_check_map_d(data, data->move.y, data->move.x) == 3)
	{
		ft_put_chest(data);
		data->move.x += 1;
		ft_put_perso_r(data);
	}
	else if (ft_check_map_d(data, data->move.y, data->move.x) == 4)
		ft_check_event_d_4(data);
	else if (ft_check_map_d(data, data->move.y, data->move.x) == 5)
		ft_quit(data);
	else
		return (6);
	return (0);
}

void	ft_put_move(t_data *data)
{
	mlx_put_image_to_window(data->mlx, data->mlx_win,
		data->background, data->move.x * data->res,
		data->move.y * data->res);
}
