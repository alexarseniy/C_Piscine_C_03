/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 01:05:50 by olarseni          #+#    #+#             */
/*   Updated: 2024/06/06 23:17:13 by olarseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*dest_ptr;
	unsigned int	i;

	i = 0;
	dest_ptr = dest;
	while (*dest)
		dest++;
	while (*src && i < nb)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (dest_ptr);
}
//
//int	ft_strlen(char *str)
//{
//	int i;
//
//	i = 0;
//	while (str[i])
//		i++;
//	return (i);
//}
//
//void	ft_clearstr(char *str_or, char *str_prop, char *txt)
//{
//	int	i;
//	int	len;
//
//	i = 0;
//	len = ft_strlen(txt);
//	while (i < len)
//	{
//		str_or[i] = txt[i];
//		str_prop[i] = txt[i];
//		i++;
//	}
//	str_or[i] = '\0';
//	str_prop[i] = '\0';
//}
//
//int  main(void)
//{
//	char str_org[100];
//	char str_prop[100];
//
//	ft_clearstr(str_org, str_prop, "");
//	printf("Función original : función propia\n");
//	printf("%s : %s\n", strncat(str_org, "", 0), ft_strncat(str_prop, "", 0));
//	ft_clearstr(str_org, str_prop, "");
//	printf("%s : %s\n", strncat(str_org, "a", 0), ft_strncat(str_prop, "a", 0));
//	ft_clearstr(str_org, str_prop, "");
//	printf("%s : %s\n", strncat(str_org, "Este texto", 0), ft_strncat(str_prop,
//	"Este texto", 0));
//	ft_clearstr(str_org, str_prop, "");
//	printf("%s : %s\n", strncat(str_org, "", 1), ft_strncat(str_prop, "", 1));
//	ft_clearstr(str_org, str_prop, "");
//	printf("%s : %s\n", strncat(str_org, "1", 1), ft_strncat(str_prop, "1", 1));
//	ft_clearstr(str_org, str_prop, "");
//	printf("%s : %s\n", strncat(str_org, "Otro texto", 1), ft_strncat(str_prop,
//	"Otro texto", 1));
//	ft_clearstr(str_org, str_prop, "");
//	printf("%s : %s\n", strncat(str_org, "", 2), ft_strncat(str_prop, "", 2));
//	ft_clearstr(str_org, str_prop, "");
//	printf("%s : %s\n", strncat(str_org, "asd", 2), ft_strncat(str_prop, "asd",
//	2));
//	ft_clearstr(str_org, str_prop, "");
//	printf("%s : %s\n", strncat(str_org, "asd", 2), ft_strncat(str_prop, "asd",
//	2));
//	ft_clearstr(str_org, str_prop, "");
//	printf("%s : %s\n", strncat(str_org, "Esto es una pequeñez", 100), 
//	ft_strncat(str_prop, "Esto es una pequeñez", 100));
//	ft_clearstr(str_org, str_prop, "");
//	printf("%s : %s\n", strncat(str_org, "", 0), ft_strncat(str_prop, "", 0));
//	ft_clearstr(str_org, str_prop, "aaaa");
//	printf("%s : %s\n", strncat(str_org, "a", 0), ft_strncat(str_prop, "a", 0));
//	ft_clearstr(str_org, str_prop, "aaaa");
//	printf("%s : %s\n", strncat(str_org, "Este texto", 0), ft_strncat(str_prop,
//	"Este texto", 0));
//	ft_clearstr(str_org, str_prop, "aaaa");
//	printf("%s : %s\n", strncat(str_org, "", 1), ft_strncat(str_prop, "", 1));
//	ft_clearstr(str_org, str_prop, "aaaa");
//	printf("%s : %s\n", strncat(str_org, "1", 1), ft_strncat(str_prop, "1",
//	1));
//	ft_clearstr(str_org, str_prop, "aaaa");
//	printf("%s : %s\n", strncat(str_org, "Otro texto", 1), ft_strncat(str_prop,
//	"Otro texto", 1));
//	ft_clearstr(str_org, str_prop, "aaaa");
//	printf("%s : %s\n", strncat(str_org, "", 2), ft_strncat(str_prop, "",
//	2));
//	ft_clearstr(str_org, str_prop, "aaaa");
//	printf("%s : %s\n", strncat(str_org, "asd", 2), ft_strncat(str_prop,
//	"asd", 2));
//	ft_clearstr(str_org, str_prop, "aaaa");
//	printf("%s : %s\n", strncat(str_org, "asd", 2), ft_strncat(str_prop,
//	"asd", 2));
//	ft_clearstr(str_org, str_prop, "aaaa");
//	printf("%s : %s\n", strncat(str_org, "Esto es una pequeñez", 100), 
//	ft_strncat(str_prop, "Esto es una pequeñez", 100));
//	ft_clearstr(str_org, str_prop, "aaaa");
//}
