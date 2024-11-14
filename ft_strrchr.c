/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btuncer <btuncer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 04:43:00 by btuncer           #+#    #+#             */
/*   Updated: 2024/11/13 19:08:49 by btuncer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	char *res;
	int found;

	found = 0;
	while (*s)
	{
		if (*s == (char)c)
		{
			found = 1;
			res = (char *)s;
		}
		s++;
	}
	if (!(char)c)
		return ((char *)s);
	if (found)
		return (res);
	return (NULL);
}
