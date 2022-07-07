/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:06:34 by ybaudoui          #+#    #+#             */
/*   Updated: 2022/07/06 14:46:32 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "proto.h"

void	ft_move(int keysym, t_data *data)
{
	int	ret;

	if (keysym == XK_s)
		ret = ft_event_s(data);
	if (keysym == XK_w)
		ret = ft_event_w(data);
	if (keysym == XK_a)
		ret = ft_event_a(data);
	if (keysym == XK_d)
		ret = ft_event_d(data);
	if (ret != 6)
	{
		data->count_move++;
		ft_printf("Number of move(s) = %d\n", data->count_move);
	}
}

void	ft_open_door(t_data *data)
{
	mlx_put_image_to_window(data->mlx, data->mlx_win,
		data->door_open, data->door.x * data->res,
		data->door.y * data->res);
}
