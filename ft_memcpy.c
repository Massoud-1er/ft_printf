/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmovahhe <mmovahhe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 18:43:27 by mmovahhe          #+#    #+#             */
/*   Updated: 2019/04/22 20:02:35 by mmovahhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void *ptr;

	ptr = dst;
	while (n--)
		*(unsigned char *)dst++ = *(unsigned char *)src++;
	return (ptr);
}
