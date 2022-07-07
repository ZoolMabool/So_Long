/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   texture_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 11:25:35 by ybaudoui          #+#    #+#             */
/*   Updated: 2022/07/06 15:03:28 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "proto.h"

int	ft_image(t_data *data, int i, int j)
{
	if (data->map[i][j] == '1')
		mlx_put_image_to_window(data->mlx, data->mlx_win,
			data->obstacle, j * data->res, i * data->res);
	else if (data->map[i][j] == 'C')
	{
		mlx_put_image_to_window(data->mlx, data->mlx_win,
			data->collectible, j * data->res, i * data->res);
	}	
	else if (data->map[i][j] == 'E')
		ft_pos_e(data, i, j);
	else if (data->map[i][j] == 'P')
	{
		mlx_put_image_to_window(data->mlx, data->mlx_win,
			data->perso_d, j * data->res, i * data->res);
		data->move.x = j;
		data->move.y = i;
	}
	else if (data->map[i][j] == '0')
		mlx_put_image_to_window(data->mlx, data->mlx_win,
			data->background, j * data->res, i * data->res);
	return (0);
}

void	texture_map(t_data *data)
{
	int		i;
	int		j;

	i = -1;
	j = -1;
	while (++i < data->size_map.height)
	{
		while (++j < data->size_map.width)
			ft_image(data, i, j);
		j = -1;
	}
}

void	ft_pos_e(t_data *data, int i, int j)
{
	mlx_put_image_to_window(data->mlx, data->mlx_win,
		data->door_close, j * data->res, i * data->res);
	data->door.x = j;
	data->door.y = i;
}

void	ft_file_to_image(t_data *data)
{
	int	x;

	ft_image_collectible(data);
	data->background = mlx_xpm_file_to_image(data->mlx,
			"img/background1.xpm", &x, &x);
	data->obstacle = mlx_xpm_file_to_image(data->mlx,
			"img/Treegrass1.xpm", &x, &x);
	data->door_close = mlx_xpm_file_to_image(data->mlx,
			"img/door_close.xpm", &x, &x);
	data->door_open = mlx_xpm_file_to_image(data->mlx,
			"img/door_open.xpm", &x, &x);
	data->perso_r = mlx_xpm_file_to_image(data->mlx,
			"img/perso_right.xpm", &x, &x);
	data->perso_l = mlx_xpm_file_to_image(data->mlx,
			"img/perso_left.xpm", &x, &x);
	data->perso_u = mlx_xpm_file_to_image(data->mlx,
			"img/perso_up.xpm", &x, &x);
	data->perso_d = mlx_xpm_file_to_image(data->mlx,
			"img/perso_down.xpm", &x, &x);
}

void	init_data(t_data *data)
{
	data->count = 0;
	data->nb_player = 0;
	data->nb_exit = 0;
	data->res = 48;
	data->door.x = 0;
	data->door.y = 0;
	data->move.x = 0;
	data->move.y = 0;
	data->p = 0;
	data->count_move = 0;
}
