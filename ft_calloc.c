/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 11:38:14 by epozuelo          #+#    #+#             */
/*   Updated: 2021/04/06 10:28:18 by epozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t len)
{
	char	*str;

	str = malloc(sizeof(char) * (count * len));
	if (str == NULL)
		return (str);
	ft_memset(str, 0, count * len);
	return (str);
}
