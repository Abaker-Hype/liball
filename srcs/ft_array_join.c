/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_join.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaker <abaker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:14:31 by abaker            #+#    #+#             */
/*   Updated: 2022/05/19 11:32:36 by abaker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	**ft_array_join(void **a1, void **a2)
{
	void	**new;
	int		i1;
	int		i2;

	if (!a1)
		return (a2);
	if (!a2)
		return (a1);
	i1 = ft_array_size(a1);
	i2 = ft_array_size(a2);
	new = ft_calloc(i1 + i2 + 1, sizeof(*new));
	if (!new)
		return (NULL);
	while (i2-- > 0)
		new[i1 + i2] = a2[i2];
	while (i1-- > 0)
		new[i1] = a1[i1];
	return (new);
}
