/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivsanto <vivsanto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 12:57:11 by vivsanto          #+#    #+#             */
/*   Updated: 2025/08/10 18:45:59 by vivsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*string, int character, size_t	n)
{
	char	*pointer_aux;

	pointer_aux =  (char *)string;
	while(n--)
		*pointer_aux++ = (char) character;
	return (string);
}

