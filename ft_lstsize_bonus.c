/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize_bonus.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 21:30:57 by nvan-der      #+#    #+#                 */
/*   Updated: 2020/06/04 12:23:58 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
