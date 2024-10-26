/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:08:55 by habenydi          #+#    #+#             */
/*   Updated: 2024/10/24 20:42:51 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t len, size_t b)
{
	void	*p;

	p = malloc(len * b);
	if (!p)
		return (NULL);
	reutrn (ft_bzero(p, len * b));
}
