/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_chest.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:42:29 by ybaudoui          #+#    #+#             */
/*   Updated: 2022/06/27 16:47:23 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "proto.h"

void	ft_put_chest_s(t_data *data)
{
	mlx_put_image_to_window(data->mlx, data->mlx_win,
		data->collectible_s, data->move.x * data->res,
		data->move.y * data->res);
}

void	ft_put_chest_w(t_data *data)
{
	mlx_put_image_to_window(data->mlx, data->mlx_win,
		data->collectible_w, data->move.x * data->res,
		data->move.y * data->res);
}

void	ft_put_chest_a(t_data *data)
{
	mlx_put_image_to_window(data->mlx, data->mlx_win,
		data->collectible_a, data->move.x * data->res,
		data->move.y * data->res);
}

void	ft_put_chest_d(t_data *data)
{
	mlx_put_image_to_window(data->mlx, data->mlx_win,
		data->collectible_d, data->move.x * data->res,
		data->move.y * data->res);
}

void	ft_put_chest(t_data *data)
{
	mlx_put_image_to_window(data->mlx, data->mlx_win,
		data->collectible2, data->move.x * data->res,
		data->move.y * data->res);
}
