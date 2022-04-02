/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkosaka <jkosaka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:38:58 by jkosaka           #+#    #+#             */
/*   Updated: 2022/04/01 20:40:33 by jkosaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	ret;

	if (!lst)
		return (0);
	ret = 1;
	while (lst->next)
	{
		ret++;
		lst = lst->next;
	}
	return (ret);
}
