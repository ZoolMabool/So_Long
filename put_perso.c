/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_perso.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 11:18:45 by ybaudoui          #+#    #+#             */
/*   Updated: 2022/06/27 15:53:29 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "proto.h"

void	ft_put_perso_u(t_data *data)
{
	mlx_put_image_to_window(data->mlx, data->mlx_win,
		data->perso_u, data->move.x * data->res, data->move.y * data->res);
}

void	ft_put_perso_d(t_data *data)
{
	mlx_put_image_to_window(data->mlx, data->mlx_win,
		data->perso_d, data->move.x * data->res, data->move.y * data->res);
}

void	ft_put_perso_l(t_data *data)
{
	mlx_put_image_to_window(data->mlx, data->mlx_win,
		data->perso_l, data->move.x * data->res, data->move.y * data->res);
}

void	ft_put_perso_r(t_data *data)
{
	mlx_put_image_to_window(data->mlx, data->mlx_win,
		data->perso_r, data->move.x * data->res, data->move.y * data->res);
}
