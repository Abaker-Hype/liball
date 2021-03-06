/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaker <abaker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:38:27 by abaker            #+#    #+#             */
/*   Updated: 2022/03/31 15:40:55 by abaker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_charcount(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	if (str)
		while (str[i])
			if (ft_charsize(str[i++]) > 0)
				c++;
	return (c);
}
