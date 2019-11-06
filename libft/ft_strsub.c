/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdonga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 17:35:23 by pdonga            #+#    #+#             */
/*   Updated: 2019/07/13 05:56:37 by pdonga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t		j;
	char		*str;

	j = 0;
	str = ft_strnew(len + 1);
	if (str && s)
	{
		while (s[start] && j < len)
			str[j++] = s[start++];
		return (str);
	}
	return (NULL);
}
