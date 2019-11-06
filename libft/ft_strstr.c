/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdonga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:43:57 by pdonga            #+#    #+#             */
/*   Updated: 2019/06/25 14:55:59 by pdonga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	size_t i;
	size_t j;
	size_t len;

	len = 0;
	i = 0;
	if (needle[0] == '\0' || needle == haystack)
		return ((char*)&haystack[i]);
	len = ft_strlen(needle);
	while (haystack[i])
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] == needle[j] && needle[j])
				j++;
			if (j == len)
				return ((char*)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
