/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaker <abaker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:47:35 by abaker            #+#    #+#             */
/*   Updated: 2022/05/19 11:21:18 by abaker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	**ft_array_free(void **arry)
{
	int	i;

	i = 0;
	while (arry[i])
		free(arry[i++]);
	free(arry);
	return (NULL);
}