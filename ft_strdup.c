/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btuncer <btuncer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:25:50 by btuncer           #+#    #+#             */
/*   Updated: 2024/11/08 15:26:43 by btuncer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*p;
	size_t	len_s;

	len_s = ft_strlen(s) + 1;
	p = malloc(sizeof(char) * len_s);
	if (!p)
		return (NULL);
	ft_memcpy(p, s, len_s);
	return (p);
}