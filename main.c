/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 17:32:17 by alpeliss          #+#    #+#             */
/*   Updated: 2021/01/19 17:52:07 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <fcntl.h>


char 		*ft_strdup(const char *s1);
char		*ft_strcpy(char *dest, const char *src);
ssize_t		ft_write(int fd, const void *buf, size_t count);  
ssize_t		ft_read(int fd, void *buf, size_t count);
size_t		ft_strlen(const char *s);
int			ft_strcmp(const char *s1, const char *s2);

int main()
{
	char	*s;
	int		a;

	s = ft_strdup("ifwio fewjveiowjv ioejv evvijdvfv");
	//a = ft_strdup("test");
	printf("--%s--", s);
	//printf("--%d--", a);
	return (0);
}
