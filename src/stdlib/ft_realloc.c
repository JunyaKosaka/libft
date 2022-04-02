/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkosaka <jkosaka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 15:06:16 by jkosaka           #+#    #+#             */
/*   Updated: 2022/04/02 15:32:53 by jkosaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*  return NULL if malloc fails  */
void	*ft_realloc(void *old_ptr, size_t old_size, size_t new_size)
{
	void	*new_ptr;
	size_t	i;

	if (new_size <= old_size)
		return (old_ptr);
	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);
	if (old_ptr == NULL)
		return (new_ptr);
	i = 0;
	while (i < old_size)
	{
		((unsigned char *)new_ptr)[i] = ((unsigned char *)old_ptr)[i];
		i++;
	}
	while (i < new_size)
	{
		((unsigned char *)new_ptr)[i] = '\0';
		i++;
	}
	free(old_ptr);
	return (new_ptr);
}
