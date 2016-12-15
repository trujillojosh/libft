/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 18:04:47 by jtrujill          #+#    #+#             */
/*   Updated: 2016/12/03 18:39:32 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*o;
	char	*t;
	char	*n;
	int		i;

	i = 0;
	o = (char *)s1;
	t = (char *)s2;
	if (!s1 || !s2)
		return (NULL);
	if (!(n = (char *)malloc(sizeof(char) * (ft_strlen(o) + ft_strlen(t)))))
		return (NULL);
	while (*o)
	{
		n[i] = *o;
		i++;
		o++;
	}
	while (*t)
	{
		n[i++] = *t;
		t++;
	}
	n[i] = '\0';
	return (n);
}
