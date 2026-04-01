/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeln <adeln@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 18:03:06 by adeln             #+#    #+#             */
/*   Updated: 2026/01/05 15:22:30 by adeln            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	j = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	j = dst_len;
	if (size == 0 || size <= dst_len)
		return (src_len + size);
	while (src[i] && i < size - dst_len - 1)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = 0;
	return (dst_len + src_len);
}
