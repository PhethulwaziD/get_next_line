/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdonga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 09:34:26 by pdonga            #+#    #+#             */
/*   Updated: 2019/07/12 22:15:45 by pdonga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	void *pt;

	pt = (void *)malloc(sizeof(size_t) * size);
	if (pt == NULL)
		return (NULL);
	ft_bzero(pt, size);
	return (pt);
}
