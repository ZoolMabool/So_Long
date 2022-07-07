/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_chest_empty.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 09:11:33 by ybaudoui          #+#    #+#             */
/*   Updated: 2022/06/30 09:11:37 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "proto.h"

void	ft_put_chest_empty_s(t_data *data)
{
	mlx_put_image_to_window(data->mlx, data->mlx_win,
		data->collectible_empty_s, data->move.x * data->res,
		data->move.y * data->res);
}

void	ft_put_chest_empty_w(t_data *data)
{
	mlx_put_image_to_window(data->mlx, data->mlx_win,
		data->collectible_empty_w, data->move.x * data->res,
		data->move.y * data->res);
}

void	ft_put_chest_empty_a(t_data *data)
{
	mlx_put_image_to_window(data->mlx, data->mlx_win,
		data->collectible_empty_a, data->move.x * data->res,
		data->move.y * data->res);
}

void	ft_put_chest_empty_d(t_data *data)
{
	mlx_put_image_to_window(data->mlx, data->mlx_win,
		data->collectible_empty_d, data->move.x * data->res,
		data->move.y * data->res);
}
