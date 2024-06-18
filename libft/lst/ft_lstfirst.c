/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfirst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:09:35 by f██████           #+#    #+#             */
/*   Updated: 2024/06/18 07:41:28 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstfirst(t_list *lst)
{
	t_list	*lst1;

	if (lst != NULL)
	{
		lst1 = lst;
		while (lst1->previous != NULL)
		{
			lst1 = lst1->previous;
		}
		return (lst1);
	}
	else
		return (0);
}
