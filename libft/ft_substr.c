/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuka <kmatsuka@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 13:06:55 by kmatsuka          #+#    #+#             */
/*   Updated: 2023/09/29 13:52:06 by kmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	len_s;
	size_t	i;
	size_t	s_start;

	if (s == NULL)
		return (NULL);
	len_s = ft_strlen(s);
	s_start = (size_t)start;
	if (s_start >= len_s)
		len = 0;
	else if (len_s - s_start < len)
		len = len_s - s_start;
	substring = (char *)malloc((len + 1) * sizeof(char));
	if (substring == NULL)
		return (NULL);
	i = 0;
	while (i < len)
		substring[i++] = s[start++];
	substring[i] = '\0';
	return (substring);
}
