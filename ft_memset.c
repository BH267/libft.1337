/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 20:46:30 by habenydi          #+#    #+#             */
/*   Updated: 2024/11/04 09:33:44 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *arr, int c, size_t l)
{
	unsigned char	*p;

	if (!arr)
		return (NULL);
	p = (unsigned char *)arr;
	while (l--)
		*(p++) = (unsigned char)c;
	return (arr);
}
