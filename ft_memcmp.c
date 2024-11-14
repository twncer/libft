/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btuncer <btuncer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 01:45:20 by btuncer           #+#    #+#             */
/*   Updated: 2024/11/13 19:02:16 by btuncer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	counter;

	counter = 0;
	while (counter < n)
	{
		if (((unsigned char *)s1)[counter] != ((unsigned char *)s2)[counter])
			return (((unsigned char *)s1)[counter]
				- ((unsigned char *)s2)[counter]);
		counter++;
	}
	return (0);
}
