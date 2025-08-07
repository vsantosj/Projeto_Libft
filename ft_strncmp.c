/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivsanto <vivsanto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 20:47:12 by vivsanto          #+#    #+#             */
/*   Updated: 2025/08/04 22:04:52 by vivsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;

    i = 0;
    while ((*s1 || *s2) && i <n)
    {

        /* code */
    }


}

int main(void)
{
    char    *s1 = "abacate";
    char    *s2 = "banana";

    int returno = ft_strncmp(s1,s2,2)

    return (0);
}
