/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_append.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaker <abaker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:14:06 by abaker            #+#    #+#             */
/*   Updated: 2022/05/19 11:25:34 by abaker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	**ft_array_append(void **array, void *add)
{
	void	**new;
	int		i;

	i = ft_array_size(array);
	new = ft_calloc(i + 2, sizeof(char *));
	if (!new)
		return (array);
	new[i] = add;
	while (i-- > 0)
		new[i] = array[i];
	if (array)
		free(array);
	return (new);
}
