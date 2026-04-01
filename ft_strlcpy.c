/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeln <adeln@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 18:01:31 by adeln             #+#    #+#             */
/*   Updated: 2026/01/05 15:21:46 by adeln            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = -1;
	if (size)
	{
		while (src[++i] && i < size - 1)
			dst[i] = src[i];
		dst[i] = 0;
	}
	return (ft_strlen(src));
}
