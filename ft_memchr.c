/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 13:30:41 by epozuelo          #+#    #+#             */
/*   Updated: 2021/04/06 10:30:42 by epozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *dest, int src, size_t len)
{
	size_t			i;
	unsigned char	*dest1;
	unsigned char	src1;

	i = 0;
	dest1 = (unsigned char *)dest;
	src1 = (unsigned char)src;
	while (i < len)
	{
		if (*dest1 == src1)
		{
			return (dest1);
		}
		dest1++;
		i++;
	}
	return (NULL);
}	
