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

void ft_strlen_test(char *s)
{
	printf("(%s)=%lu VS %zu\n", s, strlen(s),ft_strlen(s));
}

void ft_strcpy_test(char *s, int d)
{
	char	*s1;
	char	*s2;

	s1 = (char *)malloc((d + 1) * sizeof(char));
	s2 = (char *)malloc((d + 1) * sizeof(char));
	strcpy(s1, s);
	ft_strcpy(s2, s);
	printf("%s\n%s\n\n", s1, s2);
	free(s1);
	free(s2);
}

void	ft_strcmp_test(char *s1, char *s2)
{
	printf("%d VS %d\n", strcmp(s1, s2), ft_strcmp(s1, s2));
}

void	ft_strdup_test(char *s)
{
	char	*s1;
	char	*s2;

	s1 = strdup(s);
	s2 = ft_strdup(s);
	printf("%s\n%s\n\n", s1, s2);
	free(s1);
	free(s2);
}


int main()
{
	char	*s;
	int		a;


	ft_strlen_test("");	
	ft_strlen_test("iejfizo f zef");	
	ft_strlen_test("\t\t");	
//	ft_strlen_test(NULL);	
	printf("\n\n");

	ft_strcpy_test("test", 8);	
	ft_strcpy_test("test", 2);	
//	ft_strcpy_test(NULL, 8);
	printf("\n\n");

	ft_strcmp_test("bah", "bahhh");
	ft_strcmp_test("bah", "ba");
	ft_strcmp_test("", "bahhh");
	ft_strcmp_test("bah", "");
	ft_strcmp_test("bah", "bah");
//	printf("%d\n",ft_strcmp(NULL, "bah"));
//	printf("%d\n",ft_strcmp("bah", NULL));
//	printf("%d\n",ft_strcmp(NULL, NULL));
	printf("\n\n");
	
	ft_strdup_test("ifwio fewjveiowjv ioejv evvijdvfv");
	ft_strdup_test("ifwi");
//	printf("%s\n",ft_strdup(NULL));
	return (0);
}
