/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:02:28 by ybaudoui          #+#    #+#             */
/*   Updated: 2022/07/06 14:46:54 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "proto.h"

void	free_map(t_data *data)
{
	int	index;

	index = 0;
	while (index < data->size_map.height)
	{
		free(data->map[index]);
		index++;
	}
	free(data->map);
}

int	ft_quit(t_data *data)
{	
	mlx_destroy_image(data->mlx, data->background);
	mlx_destroy_image(data->mlx, data->obstacle);
	mlx_destroy_image(data->mlx, data->collectible);
	mlx_destroy_image(data->mlx, data->collectible2);
	mlx_destroy_image(data->mlx, data->collectible_a);
	mlx_destroy_image(data->mlx, data->collectible_d);
	mlx_destroy_image(data->mlx, data->collectible_s);
	mlx_destroy_image(data->mlx, data->collectible_w);
	mlx_destroy_image(data->mlx, data->collectible_empty_a);
	mlx_destroy_image(data->mlx, data->collectible_empty_d);
	mlx_destroy_image(data->mlx, data->collectible_empty_s);
	mlx_destroy_image(data->mlx, data->collectible_empty_w);
	mlx_destroy_image(data->mlx, data->door_close);
	mlx_destroy_image(data->mlx, data->door_open);
	mlx_destroy_image(data->mlx, data->perso_d);
	mlx_destroy_image(data->mlx, data->perso_u);
	mlx_destroy_image(data->mlx, data->perso_l);
	mlx_destroy_image(data->mlx, data->perso_r);
	mlx_destroy_window(data->mlx, data->mlx_win);
	mlx_destroy_display(data->mlx);
	free (data->mlx);
	free_map(data);
	exit (0);
}

int	handle_keypress(int keysym, t_data *data)
{
	if (keysym == XK_Escape)
		ft_quit(data);
	if (keysym == XK_w || keysym == XK_s
		|| keysym == XK_a || keysym == XK_d)
		ft_move(keysym, data);
	return (0);
}

int	open_fd(t_data *data, char *file_name)
{
	int	fd;

	if (ft_strcmp(file_name + (ft_strlen(file_name) - 4), ".ber"))
		return (1);
	fd = open(file_name, O_RDONLY);
	if (fd < 0)
		return (1);
	data->size_map.width = map_width(fd);
	data->size_map.height = map_height(fd);
	if (data->size_map.height == -1)
		return (1);
	close(fd);
	fd = open (file_name, O_RDONLY);
	fill_map(fd, data);
	close(fd);
	return (0);
}

int	main(int argc, char **argv)
{
	t_data	data;

	if (argc != 2)
		return (ft_printf("Error\nUsage: %s < file_name > \n", argv[0]), 1);
	init_data(&data);
	if (open_fd(&data, argv[1]) == 1)
		return (ft_printf("Error\nError map\n"), 1);
	if (check_error_map(&data) == 1)
	{
		ft_printf("Error\nBad Parsing\n");
		free_map(&data);
		return (1);
	}
	data.mlx = mlx_init();
	data.mlx_win = mlx_new_window(data.mlx, data.size_map.width * data.res,
			data.size_map.height * data.res, "ZooL WorlD");
	ft_file_to_image(&data);
	texture_map(&data);
	mlx_hook(data.mlx_win, KeyPress, KeyPressMask, &handle_keypress, &data);
	mlx_hook(data.mlx_win, DestroyNotify, ButtonReleaseMask, &ft_quit, &data);
	mlx_loop(data.mlx);
}
