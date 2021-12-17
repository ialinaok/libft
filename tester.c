/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 12:29:52 by ialinaok          #+#    #+#             */
/*   Updated: 2021/12/17 01:20:22 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char * strings = malloccccc(memcal(s, c) + count_strings);

//this part is to copy words to a string and add nulls
while (str[i] != 0)
{
	if (str[i] == c)
	{
		i++;
	}
	if (str[i] != c)
	{
		while (str[i] != c && != 0) //this is where the copying takes place
		{
			*strings = str[i];
			i++;
		}
		*strings = '\0'; //at this point str[i] == c, so we add null, first word is finished
		i++;
	}
	i++;
}

//aaand this part for actually passing the addresses of words to split array

char	**split = maloccc((count_words + 1) * sizeof(char *));

while (i <= (memcal(s,c) + count_strings))
{
	if (strings[i] == '\0') //if it equals to nul, just skip
	{
		i++;
	}
	if (strings[i] != '\0')
	{
		*split = &strings[i]; //we give the first address of the words
		while (strings[i] != '\0') //and now we iterate through the word
		{
			i++; //this will get us to where strings == null
		}
	}
}
//condition of the big loop will get checked again 