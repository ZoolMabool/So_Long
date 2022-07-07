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
	char	*message;
	char	*nbr;
	int		ret;

	message = "Number of move(s) = ";
	if (keysym == XK_s)
		ret = ft_event_s(data);
	if (keysym == XK_w)
		ret = ft_event_w(data);
	if (keysym == XK_a)
		ret = ft_event_a(data);
	if (keysym == XK_d)
		ret = ft_event_d(data);
	if (ret != 6)
		data->count_move++;
	nbr = ft_itoa(data->count_move);
	message = ft_strjoin(message, nbr);
	mlx_put_image_to_window(data->mlx, data->mlx_win,
		data->obstacle, 2 * data->res, 0);
	mlx_put_image_to_window(data->mlx, data->mlx_win,
		data->obstacle, 3 * data->res, 0);
	mlx_string_put(data->mlx, data->mlx_win, 10, 20, 0xFFFFFF, message);
	free(message);
	free(nbr);
}

void	ft_open_door(t_data *data)
{
	mlx_put_image_to_window(data->mlx, data->mlx_win,
		data->door_open, data->door.x * data->res,
		data->door.y * data->res);
}
