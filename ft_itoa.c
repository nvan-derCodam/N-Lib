/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 18:58:14 by nvan-der       #+#    #+#                */
/*   Updated: 2019/11/07 19:38:44 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		isnegative(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}

static int		count_amount(int temp)
{
	int i;

	i = 1;
	while (temp > 0)
	{
		temp /= 10;
		i++;
	}
	return (i);
}

static char		*check_value(int n)
{
	if (n == 0 || n == -0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	return (NULL);
}

static char		*calc_result(int n, int amount)
{
	int		i;
	char	*result;

	result = malloc(amount * sizeof(char) + 1);
	if (result == NULL)
		return (NULL);
	i = amount - 1;
	while (i >= 0)
	{
		result[i] = n % 10 + '0';
		n /= 10;
		i--;
	}
	return (result);
}

char			*ft_itoa(int n)
{
	char	*result;
	int		amount;
	int		temp;
	int		sign;

	temp = n;
	sign = 0;
	if (n == 0 || n == -0 || n == -2147483648)
		return (check_value(n));
	if (n < 0)
		sign = 1;
	temp = isnegative(temp);
	amount = count_amount(temp);
	n = isnegative(n);
	result = calc_result(n, amount);
	if (result == NULL)
		return (NULL);
	result[amount] = '\0';
	if (sign)
	{
		result[0] = '-';
		return (result);
	}
	return (result + 1);
}