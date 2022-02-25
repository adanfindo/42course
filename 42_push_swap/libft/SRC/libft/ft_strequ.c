/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slynn-ev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 11:17:45 by slynn-ev          #+#    #+#             */
/*   Updated: 2017/12/05 11:18:12 by slynn-ev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(const char *s1, const char *s2)
{
	if (s1 == NULL || s2 == NULL)
		return (0);
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (1);
		s1++;
		s2++;
	}
	return (0);
}
