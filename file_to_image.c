/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_to_image.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 08:35:49 by ybaudoui          #+#    #+#             */
/*   Updated: 2022/06/30 08:47:30 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "proto.h"

void	ft_image_collectible(t_data *data)
{
	int	x;

	data->collectible = mlx_xpm_file_to_image(data->mlx,
			"img/chest_close.xpm", &x, &x);
	data->collectible2 = mlx_xpm_file_to_image(data->mlx,
			"img/chest_open.xpm", &x, &x);
	data->collectible_s = mlx_xpm_file_to_image(data->mlx,
			"img/chest_open_down.xpm", &x, &x);
	data->collectible_w = mlx_xpm_file_to_image(data->mlx,
			"img/chest_open_up.xpm", &x, &x);
	data->collectible_a = mlx_xpm_file_to_image(data->mlx,
			"img/chest_open_left.xpm", &x, &x);
	data->collectible_d = mlx_xpm_file_to_image(data->mlx,
			"img/chest_open_right.xpm", &x, &x);
	data->collectible_empty_s = mlx_xpm_file_to_image(data->mlx,
			"img/chest_open_down_empty.xpm", &x, &x);
	data->collectible_empty_w = mlx_xpm_file_to_image(data->mlx,
			"img/chest_open_up_empty.xpm", &x, &x);
	data->collectible_empty_a = mlx_xpm_file_to_image(data->mlx,
			"img/chest_open_left_empty.xpm", &x, &x);
	data->collectible_empty_d = mlx_xpm_file_to_image(data->mlx,
			"img/chest_open_right_empty.xpm", &x, &x);
}
