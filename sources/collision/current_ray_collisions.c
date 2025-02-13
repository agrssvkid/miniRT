/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   current_ray_collisions.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anemesis <anemesis@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:54:34 by anemesis          #+#    #+#             */
/*   Updated: 2022/07/05 18:44:44 by anemesis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/ray.h"
#include "../../headers/collision.h"

void	current_ray_nearest_collision(t_ray *ray, t_scene *scene)
{
	int	i;

	i = -1;
	while (++i < scene->num_of.spheres)
		collide_sphere(ray, &scene->spheres[i]);
	i = -1;
	while (++i < scene->num_of.cylinders)
		collide_cylinder(ray, &scene->cylinders[i]);
	i = -1;
	while (++i < scene->num_of.planes)
		collide_plane(ray, &scene->planes[i]);
	i = -1;
	while (++i < scene->num_of.polygons)
		collide_poly(ray, &scene->polygons[i]);
}
