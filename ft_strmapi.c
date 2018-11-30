/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlahorba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 09:02:58 by vlahorba          #+#    #+#             */
/*   Updated: 2018/11/30 09:03:08 by vlahorba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*b;

	if (!s || !f || (!(b = ft_strnew(ft_strlen(s)))))
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		b[i] = f(i, (char)s[i]);
		i++;
	}
	return (b);
}
