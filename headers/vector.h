/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anemesis <anemesis@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 22:59:29 by anemesis          #+#    #+#             */
/*   Updated: 2022/06/21 15:06:08 by anemesis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H
# include "minirt.h"

typedef struct s_vec
{
	float	x;
	float	y;
	float	z;
}	t_vec;

float	dot_product(t_vec vec1, t_vec vec2);
float	vector_len(t_vec vec);
t_vec	unit_vector(t_vec vec);
t_vec	add_vecs(t_vec vec1, t_vec vec2);
t_vec	subtract_vecs(t_vec vec1, t_vec vec2);

#endif