/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinfree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaker <abaker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 22:11:00 by abaker            #+#    #+#             */
/*   Updated: 2022/06/20 14:41:53 by abaker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoinfree(char *s1, char *s2, bool f1, bool f2)
{
	char	*rtn;

	if (!(s1 || s2))
		return (NULL);
	if (!s1)
		rtn = ft_strdup(s2);
	else if (!s2)
		rtn = ft_strdup(s1);
	else
		rtn = ft_strjoin(s1, s2);
	if (f1 && s1)
		free(s1);
	if (f2 && s2)
		free(s2);
	return (rtn);
}
