/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalli <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:34:32 by sgalli            #+#    #+#             */
/*   Updated: 2022/11/16 11:49:43 by sgalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	y;

	y = 0;
	while (s[y] != '\0')
	{
		y++;
	}
	return (y);
}

char	*ft_strjoin(char *s1, char *b)
{
	size_t	i;
	char	*str;
	size_t	j;

	if (s1 == NULL)
	{
		s1 = (char *)malloc(1 * sizeof(char));
		s1[0] = '\0';
	}
	if (s1 == NULL || b == NULL)
		return (NULL);
	str = malloc((ft_strlen(s1) + ft_strlen(b) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (s1 != NULL)
		while (s1[++i] != '\0')
			str[i] = s1[i];
	while (b[j] != '\0')
		str[i++] = b[j++];
	str[ft_strlen(s1) + ft_strlen(b)] = '\0';
	free(s1);
	return (str);
}

char	*ft_strchr(char *t, int c)
{
	int	u;

	u = 0;
	if (t == NULL)
		return (0);
	if (c == '\0')
		return ((char *)&t[ft_strlen(t)]);
	while (t[u] != '\0')
	{
		if (t[u] == (char)c)
			return ((char *)&t[u]);
		u++;
	}
	return (0);
}
