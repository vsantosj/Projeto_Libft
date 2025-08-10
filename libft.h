/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivsanto <vivsanto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 09:17:23 by vivsanto          #+#    #+#             */
/*   Updated: 2025/08/10 17:49:37 by vivsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_strncmp(char *s1, char *s2, unsigned int n);

char	*ft_strchr(const char	*s, int c);
char	*ft_strrchr(const char	*s, int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);

size_t	ft_strlen(const char *s);

void	*ft_memset(void *s, int c, size_t n);
#endif
