/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 19:13:39 by nvan-der       #+#    #+#                */
/*   Updated: 2019/11/05 18:42:05 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned int i;

	i = 0;
	if (str1[i] == '\0' && str2[i] != '\0')
		return (-1);
	while (i < n && str1[i] != '\0')
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}