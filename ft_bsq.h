/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehayes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 20:08:52 by ehayes            #+#    #+#             */
/*   Updated: 2018/11/05 20:59:58 by ehayes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BSQ_H
# define FT_BSQ_H

typedef struct s_list
{
	int		size;
	char	empty;
	char	obs;
	char	full;
}			t_list;

t_list		ft_info(char *str);

#endif
