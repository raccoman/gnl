/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raccoman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 18:44:37 by raccoman          #+#    #+#             */
/*   Updated: 2021/01/19 18:44:38 by raccoman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)s + i + 1);
		i++;
	}
	return (NULL);
}

void	*ft_calloc(size_t count, size_t size)
{
	void *result;

	result = malloc(size * count);
	if (result)
		ft_bzero(result, size * count);
	return (result);
}

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char *s;

	s = b;
	while (n > 0)
		s[--n] = c;
	return (s);
}

char	*ft_strexpand(char *b, size_t expand)
{
	int		i;
	char	*expanded;

	i = 0;
	while (b[i])
		i++;
	if (!(expanded = ft_calloc(i + expand + 1, sizeof(char))))
		return (NULL);
	i = 0;
	while (b[i])
	{
		expanded[i] = b[i];
		i++;
	}
	free(b);
	return (expanded);
}
