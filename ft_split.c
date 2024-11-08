/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btuncer <btuncer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 02:28:32 by btuncer           #+#    #+#             */
/*   Updated: 2024/11/08 18:37:56 by btuncer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static unsigned int split_count(char const *s, char c)
{
    unsigned int counter;

    counter = 0;
    while (*s)
    {
        while (*s == c && *s)
            s++;
        if (*s != c && *s)
        {
            counter++;
            while (*s != c && *s)
                s++;
        }
    }
    return (counter);
}
static unsigned int short_len(const char *s, char c)
{
    unsigned int counter;

    counter = 0;
    while (*s != c && *s)
    {
        counter++;
        s++;
    }
    return (counter);
}
char **ft_split(char const *s, char c)
{
    char **split;
    unsigned int word_counter;
    unsigned int splits;

    word_counter = 0;
    splits = split_count(s, c);
}
#include <stdio.h>
int main()
{
    char **split = ft_split("burak/tuncer///meraba/mrb/////////////////", '/');
    while (*split)
    {
        printf("%s\n", *split);
        split++;
    }
}