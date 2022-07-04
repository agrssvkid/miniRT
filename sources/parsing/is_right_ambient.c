/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_right_ambient.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoye <enoye@clown.ru>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 17:08:09 by enoye             #+#    #+#             */
/*   Updated: 2022/07/03 12:26:51 by enoye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/parsing.h"

int	is_right_ambient(char *line)
{
	line++;
	while (*line == ' ')
		line++;
	if (is_right_ratio(line) == 0)
		return (0);
	while (*line != ' ')
		line++;
	while (*line == ' ')
		line++;
	if (is_right_rgb(line) == 0)
		return (0);
	while (*line == ' ')
		line++;
	if (*line != '\0' && *line != '\n')
		return (0);
	return (1);
}