/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:09:35 by f██████           #+#    #+#             */
/*   Updated: 2024/06/18 07:41:28 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(const char *s1)
{
	char	*pnt;
	int		i;

	pnt = ft_calloc(ft_strlen(s1) + 1, sizeof(char));
	if (!pnt)
		return (0);
	i = 0;
	while (s1[i])
	{
		pnt[i] = s1[i];
		i++;
	}
	pnt[i] = '\0';
	return (pnt);
}