/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:18:48 by habenydi          #+#    #+#             */
/*   Updated: 2024/11/05 15:08:04 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lenum(int n, int nega)
{
	int	l;

	l = 1;
	if (nega)
		n *= -1;
	while (n >= 10)
	{
		n /= 10;
		l++;
	}
	if (nega)
		return (l + 1);
	return (l);
}

static int	ft_nega(int n, char *num)
{
	*num = '-';
	n *= -1;
	return (n);
}

static char	*ft_minhandl(int n, char *num)
{
	int	i;

	num = malloc(12);
	if (!num)
		return (NULL);
	i = 9;
	num[11] = '\0';
	num[0] = '-';
	num[10] = '8';
	n /= 10;
	n *= -1;
	while (n > 0)
	{
		num[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	return (num);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		nega;
	int		lenum;

	num = NULL;
	if (n == -2147483648)
		return (ft_minhandl(n, num));
	nega = (n < 0);
	lenum = ft_lenum (n, nega);
	num = malloc(lenum + 1);
	if (!num)
		return (NULL);
	if (nega)
		n = ft_nega(n, num);
	num[lenum--] = '\0';
	while (0 <= lenum)
	{
		if (nega && !lenum)
			break ;
		num[lenum--] = (n % 10) + '0';
		n /= 10;
	}
	return (num);
}
