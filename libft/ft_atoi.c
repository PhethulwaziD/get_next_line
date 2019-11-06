/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdonga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 10:39:45 by pdonga            #+#    #+#             */
/*   Updated: 2019/06/26 15:03:10 by pdonga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int neg;
	int ans;

	neg = 1;
	ans = 0;
	i = 0;
	while (ft_escape(str[i]) == 1)
		i++;
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_isdigit(str[i]) != 0)
	{
		ans = ans * 10 + (str[i] - 48);
		i++;
	}
	ans = ans * neg;
	return (ans);
}
