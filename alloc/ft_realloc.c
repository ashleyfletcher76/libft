/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfletch <asfletch@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 14:04:47 by asfletch          #+#    #+#             */
/*   Updated: 2023/12/22 14:12:28 by asfletch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_realloc(void *ptr, size_t new_size)
{
	void	*new_ptr;
	size_t	copy_size;

	if (new_size == 0)
	{
		if (ptr)
			free (ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);
	else
	{
		copy_size = new_size;
		ft_memcpy(new_ptr, ptr, copy_size);
		free (ptr);
	}
	return (new_ptr);
}
