/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdonga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 14:42:51 by pdonga            #+#    #+#             */
/*   Updated: 2019/07/05 07:57:51 by pdonga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*csrc;
	unsigned char		*cdst;
	unsigned char		ch;
	size_t				i;

	csrc = (unsigned char*)src;
	cdst = (unsigned char*)dst;
	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		cdst[i] = csrc[i];
		if (csrc[i] == ch)
			return (&((unsigned char*)dst)[i + 1]);
		i++;
	}
	return (NULL);
}
