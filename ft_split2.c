
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
		while (s[i] != c)
			i++;
	}
	return (words);
}

void	ft_print(char *split, const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != c && str[i] != '\0')
	{
		split[i] = str[i];
		i++;
	}
	split[i] = '\0';
}

int	ft_writ(char **split, char *str, char c)
{
	int	i;
	int	j;
	int	word;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == c || str[i] == '\0') == 1)
			i++;
		else
		{
			j = 0;
			while ((str[i + j] != c && str[i + j] != '\0') == 1)
				j++;
			split[word] = (char *)malloc(sizeof(char) * j + 1);
			if (split == NULL)
				ft_free(split, word);
			ft_print(split[word], str + i, c);
			word++;
			i += j;
		}
	}
	return (0);
}

char	**ft_split(const char *s, char c)
{
	char	**sp;
	int		word;

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
