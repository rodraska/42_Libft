/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreis-de <rreis-de@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:26:13 by rreis-de          #+#    #+#             */
/*   Updated: 2022/10/22 16:26:13 by rreis-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	char			*sub;
	size_t			i;
	unsigned int	strlen;

	strlen = ft_strlen(str);
	sub = (char *)malloc(sizeof(*str) * (len + 1));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len && strlen >= start)
	{
		sub[i] = str[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}
