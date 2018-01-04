/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourmea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/20 17:08:59 by pbourmea          #+#    #+#             */
/*   Updated: 2015/06/23 16:42:04 by pbourmea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *s)
{
	int	res;
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	res = 0;
	while (ft_strchr("\t\n\v\f\r ", *s))
		s++;
	if (s[i] == '+' || s[i] == '-')
		sign = (s[i++] == '-') ? -1 : 1;
	while (s[i] >= '0' && s[i] <= '9')
		res = res * 10 + ((s[i++] - '0') * sign);
	return (res);
}