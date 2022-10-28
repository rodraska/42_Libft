/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreis-de <rreis-de@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:24:33 by rreis-de          #+#    #+#             */
/*   Updated: 2022/10/22 16:24:33 by rreis-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*s;
	size_t	i;

	s = (char *)str;
	i = 0;
	while (s[i] != '\0' && i < n)
	{
		if (s[i] == c)
			return ((char *)str + i);
		i++;
	}
	return (0);
}
