/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourmea <pbourmea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 13:03:15 by pbourmea          #+#    #+#             */
/*   Updated: 2014/11/26 18:39:25 by pbourmea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isascii(int n)
{
	if (n >= 0 && n <= 127)
		return (1);
	else
		return (0);
}
