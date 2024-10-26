/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:52:10 by habenydi          #+#    #+#             */
/*   Updated: 2024/10/24 14:52:17 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(char *src, char *dest, size_t len)
{
    char    *beff;

    ft_memcpy(src, beff, len);
    ft_memcpy(beff, dest, len);
    return (dest);
}