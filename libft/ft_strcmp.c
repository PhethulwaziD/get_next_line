/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdonga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:26:34 by pdonga            #+#    #+#             */
/*   Updated: 2019/07/09 11:06:15 by pdonga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_strcmp(const char *str, const char *str1)
{
	unsigned int	i;

	i = 0;
	while ((str[i] && str1[i]) && (str[i] == str1[i]))
		i++;
	return ((unsigned char)str[i] - (unsigned char)str1[i]);
}
