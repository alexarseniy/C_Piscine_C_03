/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 01:16:29 by olarseni          #+#    #+#             */
/*   Updated: 2024/06/06 06:59:39 by olarseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (!*to_find)
		return (str);
	while (*str)
	{
		i = 0;
		while (str[i] == to_find[i] && str[i])
			i++;
		if (!to_find[i])
			return (str);
		str++;
	}
	return (NULL);
}
/*
int	main(void)
{
	printf("1.Función original: %s\n1.Función propia: %s\n\n", strstr("", ""), 
	ft_strstr("",""));
	printf("2.Función original: %s\n2.Función propia: %s\n\n", strstr("a", ""), 
	ft_strstr("a",""));
	printf("3.Función original: %s\n3.Función propia: %s\n\n", strstr("", "a"), 
	ft_strstr("","a"));
	printf("4.Función original: %s\n4.Función propia: %s\n\n", strstr("a", "a"),
	ft_strstr("a","a"));
	printf("5.Función original: %s\n5.Función propia: %s\n\n", strstr("Hola",
	"a"), ft_strstr("Hola","a"));
	printf("6.Función original: %s\n6.Función propia: %s\n\n", strstr("hola", 
	"z"), ft_strstr("hola","z"));
	printf("7.Función original: %s\n7.Función propia: %s\n\n", strstr("hola",
	"hol"), ft_strstr("hola","hol"));
	printf("8.Función original: %s\n8.Función propia: %s\n\n", strstr("Esto es 
	un ejemplo más largo", "un"), ft_strstr("Esto es un ejemplo más largo","un"));
	printf("8.Función original: %s\n8.Función propia: %s\n\n", strstr("Esto es
	un ejemplo más largo", "Esto es un ejemplo más largo"), ft_strstr("Esto es un
	ejemplo más largo","Esto es un ejemplo más largo"));
}*/
