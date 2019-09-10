/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstench <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 18:13:49 by sstench           #+#    #+#             */
/*   Updated: 2019/09/07 19:11:55 by sstench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	k;

	if (min >= max)
		return (0);
	arr = malloc(sizeof(int) * (max - min));
	k = 0;
	while (min <= max)
	{
		arr[k] = min;
		min++;
		k++;
	}
	return (arr);
}
