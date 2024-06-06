/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 02:02:33 by olarseni          #+#    #+#             */
/*   Updated: 2024/06/06 03:17:47 by olarseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d_len;
	unsigned int	s_len;

	i = 0;
	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	if (size <= d_len)
		return (s_len + size);
	while (dest[i] != '\0' && i < size - 1)
		i++;
	while (*src != '\0' && i < size - 1)
		dest[i++] = *(src++);
	dest[i] = '\0';
	return (d_len + s_len);
}
//
//int	main(void)
//{
//	char src[] = "Hola pequeñajos!";
////	char dest[500] = "Esto es una prueba el org. ";
//	char dest2[500] = "Esto es una prueba con ft. ";
////	unsigned int result_size_org = strlcat(dest, src, 500);
//	unsigned int result_size = ft_strlcat(dest2, src, 0);
//
//	printf("strlcpy: \n\tDest=%s\n\tResult_Size = %i\n", dest, result_size_org);
//	printf("strlcpy: \n\tDest=%s\n\tResult_Size = %i\n", dest2, result_size);
//	return (0);
//}
