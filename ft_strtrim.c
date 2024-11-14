/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btuncer <btuncer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 02:19:11 by btuncer           #+#    #+#             */
/*   Updated: 2024/11/14 04:47:14 by btuncer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdbool.h>
#include <stdio.h>

static bool	is_inset(char const c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (true);
		set++;
	}
	return (false);
}
static bool	rest_is_set(char const *s, char const *set)
{
	while (*s)
	{
		if (!is_inset(*s, set))
			return (false);
		s++;
	}
	return (true);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*left;
	char			*right;
	char			*res;
	unsigned int	counter;

	if (!s1 || !set)
		return (NULL);
	left = (char *)s1;
	while (is_inset(*left, set))
		left++;
	right = left;
	while (!rest_is_set(right, set) && *right)
		right++;
	res = malloc(right - left + 1);
	if (!res)
		return (NULL);
	counter = 0;
	while (counter < right - left)
	{
		res[counter] = left[counter];
		counter++;
	}
	res[counter] = '\0';
	return (res);
}
