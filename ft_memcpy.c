/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeln <adeln@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 15:52:21 by adeln             #+#    #+#             */
/*   Updated: 2025/12/17 20:33:58 by adeln            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*destx;
	char	*srcx;
	size_t	i;

	i = 0;
	destx = (char *)dest;
	srcx = (char *)src;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		destx[i] = srcx[i];
		i++;
	}
	return (dest);
}
