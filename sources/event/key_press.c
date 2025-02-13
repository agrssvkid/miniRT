/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_press.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anemesis <anemesis@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 17:49:37 by anemesis          #+#    #+#             */
/*   Updated: 2022/06/25 19:17:28 by anemesis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/minirt.h"
#include "../../headers/controls.h"
#include "../../headers/utils.h"

int	key_press(int keycode, t_minirt *rt)
{
	if (keycode == KEY_D && rt->controls.hor_shift != 1)
		rt->controls.hor_shift++;
	else if (keycode == KEY_A && rt->controls.hor_shift != -1)
		rt->controls.hor_shift--;
	else if (keycode == KEY_W && rt->controls.zoom != 1)
		rt->controls.zoom++;
	else if (keycode == KEY_S && rt->controls.zoom != -1)
		rt->controls.zoom--;
	else if (keycode == KEY_E && rt->controls.ver_shift != 1)
		rt->controls.ver_shift++;
	else if (keycode == KEY_Q && rt->controls.ver_shift != -1)
		rt->controls.ver_shift--;
	else if (keycode == KEY_PLUS)
		rt->controls.velocity *= 2;
	else if (keycode == KEY_MINUS)
		rt->controls.velocity /= 2;
	else if (keycode == KEY_R)
		rt->scene.cam = rt->scene.cam_default;
	else if (keycode == KEY_ESC)
		exit_free(rt);
	return (0);
}
