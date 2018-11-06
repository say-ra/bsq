/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_append.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehayes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 15:01:18 by ehayes            #+#    #+#             */
/*   Updated: 2018/11/06 21:08:51 by ehayes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_bsq.h"

void	ft_append(char ***arr, char *str, int i)
{
	int s;
	int st;

	st = ft_strlen(str);
	s = info.size;
	arr = (char **)malloc(sizeof(char *)*(s+1) + 1);
	arr[i] = (char *)malloc(sizeof(char)*st + 1);
	arr[i + 1] = NULL;
    while (src[j] != '\0')
    {
        arr[i] = src[j];
        j++;
        i++;
    }
    arr[i] = '\0';
}
