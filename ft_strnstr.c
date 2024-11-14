/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btuncer <btuncer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:41:02 by btuncer           #+#    #+#             */
/*   Updated: 2024/11/14 18:52:16 by btuncer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int				occured;
	unsigned int	counter;

	if (!*little)
		return ((char *)big);
	occured = 0;
	while (*big && len)
	{
		if (big[0] == little[0])
		{
			counter = 0;
			while (big[counter] && counter < ft_strlen(little) && counter < len)
			{
				if (counter == ft_strlen(little) - 1
					&& big[counter] == little[counter])
					occured = 1;
				counter++;
			}
		}
		if (occured)
			return ((char *)big);
		len--;
		big++;
	}
	return (NULL);
}
