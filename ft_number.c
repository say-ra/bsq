/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehayes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 21:49:26 by ehayes            #+#    #+#             */
/*   Updated: 2018/11/05 22:08:15 by ehayes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_bsq.h"

int		ft_number(char *str)
{
	int i;

	i = 0;
	while (str[i] => '0' && str[i] <= '9')
		i++;
	return (i);
}
