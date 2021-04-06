/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 14:08:39 by epozuelo          #+#    #+#             */
/*   Updated: 2021/04/06 10:35:27 by epozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	size_t			i;
	unsigned char	*dest1;
	unsigned char	*src1;

	src1 = (unsigned char *)src;
	dest1 = (unsigned char *)dest;
	i = 0;
	while (i < len && src1[i] != (unsigned char)c)
	{
		dest1[i] = src1[i];
		i++;
	}
	if (i == len)
		return (0);
	else
	{
		dest1[i] = src1[i];
		i++;
		return (&dest[i]);
	}
}
