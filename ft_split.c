/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-s2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:51:48 by joada-s2          #+#    #+#             */
/*   Updated: 2023/10/23 13:49:02 by joada-s2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	n;
	size_t	i;

	i = 0;
	n = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c && i != 0)
			n++;
		i++;
	}
	if (i >= 0 && s[i - 1] != c)
		n++;
	return (n);
}

static void	*free_mem1(char **p, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		free(p[j]);
		j++;
	}
	free(p);
	return (NULL);
}

static char	**ft_splitwords(char const *s, char c, size_t index, char **new)
{
	size_t	i;
	size_t	b;
	size_t	e;

	i = 0;
	while (s[i] && index < count_words(s, c))
	{
		while (s[i] == (unsigned char)c && s[i])
			i++;
		b = i;
		e = 0;
		while (s[i] != (unsigned char)c && s[i])
		{
			e++;
			i++;
		}
		new[index] = ft_substr(s, b, e);
		if (!new[index++])
		{
			return (free_mem1(new, index));
		}
	}
	if (new)
		new[index] = 0;
	return (new);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	size_t	i;
	size_t	index;

	i = 0;
	index = 0;
	if (ft_strlen(s) == 0)
		return ((char **)ft_calloc(1, sizeof(char *)));
	new = (char **)ft_calloc(sizeof(char *), (count_words(s, c) + 1));
	if (new == NULL)
		return (NULL);
	if (!s)
		return (NULL);
	new = ft_splitwords(s, c, 0, new);
	return (new);
}

//  int main()
//  {

//      char **name = ft_split("hello!", ' ');
//      int i = 0;

//      while (i < 2)
//      {
//          printf("%s\n", name[i]);
//          i++;
//      }
//  }
