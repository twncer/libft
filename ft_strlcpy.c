/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btuncer <btuncer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:42:15 by btuncer           #+#    #+#             */
/*   Updated: 2024/11/13 19:05:27 by btuncer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	counter;

	if (size < 1)
		return (ft_strlen(src));
	counter = 0;
	while (counter < size - 1 && src[counter])
	{
		dst[counter] = src[counter];
		counter++;
	}
	dst[counter] = '\0';
	return (ft_strlen(src));
}
