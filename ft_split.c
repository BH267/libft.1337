
#include "libft.h"

void	ft_free(char **str, int n)
{
	while (n--)
	{
		free(str[n]);
	}
	free(str);
}

int	ft_count(char *s, char c)
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

void	ft_fill(char *sp, const char *s, char c)
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

int	ft_writ(char **sp, char *s, char c)
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
				ft_free(sp, word);
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
		return (0);
	words = ft_count((char *)s, c);
	sp = (char **)malloc(sizeof(char *) * (words + 1));
	if (sp == NULL)
		return (NULL);
	sp[words] = 0;
	ft_writ(sp, (char *)s, c);
	return (sp);
}
