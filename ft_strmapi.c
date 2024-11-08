/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btuncer <btuncer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 23:22:15 by btuncer           #+#    #+#             */
/*   Updated: 2024/11/08 18:07:02 by btuncer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	counter;

	res = malloc(ft_strlen(s) + 1);
	if (!res)
		return (NULL);
	counter = 0;
	while (counter < ft_strlen(s))
	{
		res[counter] = f(counter, s[counter]);
		counter++;
	}
	res[counter] = '\0';
	return (res);
}
#include <stdio.h>
char	mert(unsigned int i,char s)
{
	if(s >= 'n' && s <= 'z')
		s -= 13;
	else if(s >= 'a' && s <= 'm')
		s += 13;
	if(s >= 'N' && s <= 'Z')
		s -= 13;
	else if(s >= 'A' && s <= 'M')
		s += 13;
	return s;
}
int main()
{
	char m[] = "Rnpu cebwrpg bs gur 97 Pbzzba Pber pbagnvaf na rapbqrq uvag. Sbe"
"rnpu pvepyr, bayl bar cebwrpg cebivqrf gur pbeerpg uvag arrqrq sbe"
"gur arkg pvepyr. Guvf punyyratr vf vaqvivqhny, gurer vf bayl n"
"cevmr sbe bar fghqrag jvaare cebivqvat nyy qrpbqrq zrffntrf. Nal"
"nqinagntrq crbcyr pna cynl, yvxr pheerag be sbezre fgnss, ohg gur"
"cevmr jvyy erznva flzobyvp. Gur uvag sbe guvf svefg cebwrpg vf:"
"Ynetr pbjf trarebfvgl pbzrf jvgu punegf naq sbhe oybaqr ungf gb qrsl"
"hccre tenivgl ureb";
char *result = ft_strmapi(m, mert);
	if (result)
	{
		printf("%s\n", result);
		free(result); 
	}
	return 0;

}