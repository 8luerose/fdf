/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 01:36:10 by taehkwon          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/07/03 15:31:45 by taehkwon         ###   ########.fr       */
=======
/*   Updated: 2023/07/03 00:33:04 by taehkwon         ###   ########.fr       */
>>>>>>> cb38e202512a1949b8283b7ec00662399b8a4ad0
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	main(int ac, char **av)
{
	t_map	map;
	t_vars	vars;
	t_image	image;
	int		size_line1 = 0;
	int		bit_per_pixel1 = 0;

	if (ac == 2)
	{
		if (!is_valid_file(av[1]))
			ft_perror("ERROR: Invalid file name");
		parsing(av[1], &map);
		
		// isometric(&map);
		// set_mlx(&vars, &image);;
		// //draw

		// for (int i =0 ; i< 200  ; i++)
		// {
		// 	for(int k = 0; k<200; k++)
		// 	{
		// 		char *dst2;
		// 		// 8 = sizeof(char)
		// 		dst2 = image.ptr + (k * size_line1 + i * bit_per_pixel1 / 8 );
		// 		*(unsigned int*)dst2 = map.p_map[k + i].color;
		// 	}
		// }

		// print_mlx(&vars, &image);

	}
	return (0);
}

