/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proto.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:50:46 by ybaudoui          #+#    #+#             */
/*   Updated: 2022/07/06 13:34:36 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTO_H
# define PROTO_H

# include "mlx.h"
# include "mlx_int.h"
# include "libft.h"
# include <X11/keysym.h>
# include <X11/X.h>
# include "get_next_line.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h> 
# include <stdio.h>
# include "so_long.h"

int		map_width(int fd);
int		map_height(int fd);
void	fill_map(int fd, t_data *data);
void	texture_map(t_data *data);
int		ft_image(t_data *data, int i, int j);
void	ft_file_to_image(t_data *data);
void	ft_move(int keysym, t_data *data);
int		ft_quit(t_data *data);
void	ft_put_move(t_data *data);
void	ft_put_perso_u(t_data *data);
void	ft_put_perso_d(t_data *data);
void	ft_put_perso_l(t_data *data);
void	ft_put_perso_r(t_data *data);
int		ft_check_map_s(t_data *data, int i, int j);
int		ft_check_map_w(t_data *data, int i, int j);
int		ft_check_map_a(t_data *data, int i, int j);
int		ft_check_map_d(t_data *data, int i, int j);
void	ft_put_chest_s(t_data *data);
void	ft_put_chest_w(t_data *data);
void	ft_put_chest_a(t_data *data);
void	ft_put_chest_d(t_data *data);
void	ft_put_chest(t_data *data);
int		ft_event_s(t_data *data);
int		ft_event_w(t_data *data);
int		ft_event_a(t_data *data);
int		ft_event_d(t_data *data);
void	ft_open_door(t_data *data);
void	ft_put_chest_empty_s(t_data *data);
void	ft_put_chest_empty_w(t_data *data);
void	ft_put_chest_empty_a(t_data *data);
void	ft_put_chest_empty_d(t_data *data);
void	ft_check_event_a_2(t_data *data);
void	ft_check_event_a_4(t_data *data);
void	ft_check_event_d_2(t_data *data);
void	ft_check_event_d_4(t_data *data);
void	ft_image_collectible(t_data *data);
void	ft_pos_e(t_data *data, int i, int j);
void	ft_check_event_w_4(t_data *data);
void	ft_check_event_w_2(t_data *data);
void	ft_check_event_s_2(t_data *data);
void	ft_check_event_s_4(t_data *data);
int		check_error_map(t_data *data);
void	check_error_map_top(t_data *data);
int		check_return_error(t_data *data, int i, int j);
void	init_data(t_data *data);

#endif