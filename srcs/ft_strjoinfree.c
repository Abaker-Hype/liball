/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinfree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaker <HypeSwarm>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 22:11:00 by abaker            #+#    #+#             */
/*   Updated: 2022/04/06 22:11:35 by abaker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoinfree(char *s1, char *s2, bool f1, bool f2)
{
	char	*rtn;

	rtn = ft_strjoin(s1, s2);
	if (f1)
		free(s1);
	if (f2)
		free(s2);
	return (rtn);
}
