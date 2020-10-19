/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeel <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 19:39:31 by mkeel             #+#    #+#             */
/*   Updated: 2019/04/23 19:39:32 by mkeel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char	*s1;

	s1 = NULL;
	if (!(s1 = ft_strnew(n)))
		return (0);
	s1 = ft_strncpy(s1, s, n);
	return (s1);
}