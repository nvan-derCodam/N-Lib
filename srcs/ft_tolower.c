/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 15:31:51 by nvan-der       #+#    #+#                */
/*   Updated: 2019/10/28 16:55:24 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
