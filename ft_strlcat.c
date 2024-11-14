/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btuncer <btuncer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:34:34 by btuncer           #+#    #+#             */
/*   Updated: 2024/11/14 18:50:33 by btuncer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	cnt;
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (size <= dstlen)
		return (srclen + size);
	cnt = 0;
	while ((dstlen + cnt) < size - 1 && src[cnt])
	{
		dst[dstlen + cnt] = src[cnt];
		cnt++;
	}
	dst[dstlen + cnt] = '\0';
	return (dstlen + srclen);
}