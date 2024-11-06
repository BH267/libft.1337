/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <habenydi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:23:55 by habenydi          #+#    #+#             */
/*   Updated: 2024/11/06 11:38:47 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **str, int n)
{
	while (n--)
		free(str[n]);
	free(str);
}

static int	ft_count(char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c)
			words++;
		while (s[i] != c && s[i])
			i++;
	}
	return (words);
}

static void	ft_fill(char *sp, const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
	{
		sp[i] = s[i];
		i++;
	}
	sp[i] = '\0';
}

static int	ft_writ(char **sp, char *s, char c)
{
	int	i;
	int	j;
	int	word;

	i = 0;
	word = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c || s[i] == '\0')
			i++;
		else
		{
			j = 0;
			while (s[i + j] != c && s[i + j] != '\0')
				j++;
			sp[word] = (char *)malloc(sizeof(char) * j + 1);
			if (sp == NULL)
				return (ft_free(sp, word), 0);
			ft_fill(sp[word], s + i, c);
			word++;
			i += j;
		}
	}
	return (0);
}

char	**ft_split(const char *s, char c)
{
	char	**sp;
	int		words;

	if (s == NULL)
		return (NULL);
	words = ft_count((char *)s, c);
	sp = (char **)malloc(sizeof(char *) * (words + 1));
	if (sp == NULL)
		return (NULL);
	sp[words] = NULL;
	ft_writ(sp, (char *)s, c);
	return (sp);
}
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char	*string = "      split       this for   me  !       ";
	char	**expected = ((char*[6]){"split", "this", "for", "me", "!", NULL});

	char	**result = ft_split(string, ' ');

	 while (*result)
	{
                if (strcmp(*result, *expected))
                {
                        printf("TEST_FAILED");
                }
                result++;
                expected++;
        }
        printf("TEST_SUCCESS");
}*/
