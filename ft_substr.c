/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btuncer <btuncer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 21:10:52 by btuncer           #+#    #+#             */
/*   Updated: 2024/11/08 17:49:41 by btuncer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*res;
	unsigned int	counter;

	if (!s || !*s)
	{
		res = malloc(1);
		res[0] = '\0';
		return (res);
	}
	if (len > ft_strlen(s) - start)
		res = malloc(ft_strlen(s) - start + 1);
	else
		res = malloc(len + 1);
	if (!res)
		return (NULL);
	counter = 0;
	s = s + start;
	while (*s && counter < len)
	{
		res[counter] = *s;
		counter++;
		s++;
	}
	res[counter] = '\0';
	return (res);
}
#include <stdio.h>
int main()
{
	char res[] = "naberrrr";
	printf("%s",ft_substr(res,5,3));
}