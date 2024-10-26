/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:22:29 by habenydi          #+#    #+#             */
/*   Updated: 2024/10/24 14:22:43 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(char *src, char *dest, size_t len)
{
    size_t  i;

    i = 0;
    while (i < len)
    {
        *(dest + i) = *(src + i);
    }
    return (dest);
}
