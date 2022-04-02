/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkosaka <jkosaka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 15:30:14 by jkosaka           #+#    #+#             */
/*   Updated: 2022/04/02 15:30:30 by jkosaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t len)
{
	char	*ret;

	ret = malloc(len + 1);
	if (!ret)
		return (NULL);
	ft_memcpy(ret, s, len);
	*(ret + len) = '\0';
	return (ret);
}
