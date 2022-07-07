/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 10:23:22 by ybaudoui          #+#    #+#             */
/*   Updated: 2022/07/06 13:15:21 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

typedef struct s_move
{
	int	x;
	int	y;

}			t_move;

typedef struct s_door
{
	int	x;
	int	y;
}			t_door;

typedef struct s_map
{
	int		height;
	int		width;
}			t_map;

typedef struct s_data
{
	void	*background;
	void	*obstacle;
	void	*collectible;
	void	*collectible2;
	void	*collectible_s;
	void	*collectible_w;
	void	*collectible_a;
	void	*collectible_d;
	void	*collectible_empty_s;
	void	*collectible_empty_w;
	void	*collectible_empty_a;
	void	*collectible_empty_d;
	void	*door_close;
	void	*door_open;
	int		count;
	int		nb_player;
	int		nb_exit;
	void	*perso_r;
	void	*perso_u;
	void	*perso_d;
	void	*perso_l;
	void	*mlx;
	int		p;
	int		count_move;
	char	**map;
	int		res;
	void	*mlx_win;
	t_map	size_map;
	t_move	move;
	t_door	door;
}			t_data;

#endif