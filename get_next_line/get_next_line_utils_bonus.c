/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfletch <asfletch@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 09:59:11 by asfletch          #+#    #+#             */
/*   Updated: 2023/11/02 11:41:20 by asfletch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	chr;

	i = 0;
	chr = (char)c;
	while (s[i] != '\0')
	{
		if (s[i] == chr)
			return ((char *)s + i);
		i++;
	}
	if (chr == '\0')
		return ((char *)s + i);
	return (NULL);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	char	*byte_ptr;
	ssize_t	total_size;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	else
	{
		byte_ptr = ptr;
		total_size = count * size;
		while (total_size > 0)
		{
			*byte_ptr++ = 0;
			total_size--;
		}
	}
	return (ptr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	char	*temp;

	if (!s1 || !s2)
		return (NULL);
	result = ft_calloc(ft_strlen(s1) + ft_strlen(s2) +1, sizeof(char));
	if (!result)
		return (NULL);
	temp = result;
	while (*s1)
	{
		*temp = *s1;
		temp++;
		s1++;
	}
	while (*s2)
	{
		*temp = *s2;
		temp++;
		s2++;
	}
	*temp = '\0';
	return (result);
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*join_strings(char *stash, char *buffer)
{
	char	*new_stash;

	if (stash == NULL || buffer == NULL)
		return (NULL);
	new_stash = ft_strjoin(stash, buffer);
	if (new_stash == NULL)
	{
		free (stash);
		return (NULL);
	}
	free (stash);
	return (new_stash);
}
