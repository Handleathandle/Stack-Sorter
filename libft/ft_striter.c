/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bslakey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 04:11:49 by bslakey           #+#    #+#             */
/*   Updated: 2016/10/01 15:41:28 by bslakey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char*))
{
	size_t i;

	i = 0;
	MEM_GUARD_VR(s);
	MEM_GUARD_VR(f);
	while (s[i])
	{
		(*f)(&s[i]);
		i++;
	}
}
