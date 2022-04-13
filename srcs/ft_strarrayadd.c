/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarrayadd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaker <abaker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 12:04:09 by abaker            #+#    #+#             */
/*   Updated: 2022/04/13 12:09:28 by abaker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strarrayadd(char **array, char *line)
{
	char	**new;
	int		i;

	i = 0;
	if (array)
		while (array[i])
			i++;
	new = ft_calloc(i + 2, sizeof(char *));
	if (!new)
		return (array);
	new[i] = line;
	while (i-- > 0)
		new[i] = array[i];
	if (array)
		free(array);
	return (new);
}
