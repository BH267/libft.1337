
#include "libft.h"

char	**ft_split(char	const *s, char c)
{
	char	**sp;
	int	*count;
	int	words;
	int	chars;
	int	i;
	int	j;

	chars = 0;
	words = 0;
	i = 0;
	j = 0;
	while (s[i])
	{
		if(s[i] != c)
		{
			chars++;
		}else
		{
			count[words] = chars;
			words++;
			chars = 0;
		}
		i++;
	}
	sp = (char *)malloc(words*sizeof(char*));
	if (!sp)
		return (NULL);
	i = 0;
	while (i <= words)
	{
		sp[i] = (char)malloc(count[words] + 1);
		if (!sp[i])
		{
			while	(j < i)
			{
				free(sp[j]);
				j++;
			}
			free (sp);
			return (NULL);
		}
	}
	i = 0;
	while (i <= words)
	{

	}

}
