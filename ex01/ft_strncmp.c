/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 00:50:47 by olarseni          #+#    #+#             */
/*   Updated: 2024/06/06 02:03:09 by olarseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && i < n - 1 && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
//
//int main(void)
//{
////	if (argc != 4)
////		return (0);
////	printf("%i\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
////	printf("%i\n", strncmp(argv[1], argv[2], atoi(argv[3])));
//	printf("%i\n", ft_strncmp("", "", 0));
//	printf("%i\n", ft_strncmp("", "q", 0));
//	printf("%i\n", ft_strncmp("q", "", 0));
//	printf("%i\n", ft_strncmp("as", "a", 0));
//	printf("%i\n", ft_strncmp("a", "as", 0));
//	printf("%i\n", ft_strncmp("aa", "aa", 0));
//	printf("%i\n", ft_strncmp("aasf", "aasd", 0));
//	printf("%i\n", ft_strncmp("", "", 1));
//	printf("%i\n", ft_strncmp("", "", 1));
//	printf("%i\n", ft_strncmp("", "q", 1));
//	printf("%i\n", ft_strncmp("q", "", 1));
//	printf("%i\n", ft_strncmp("as", "a", 1));
//	printf("%i\n", ft_strncmp("a", "as", 1));
//	printf("%i\n", ft_strncmp("aa", "aa", 1));
//	printf("%i\n", ft_strncmp("aasf", "aasd", 1));
//	printf("%i\n", ft_strncmp("", "q", 10));
//	printf("%i\n", ft_strncmp("q", "", 10));
//	printf("%i\n", ft_strncmp("as", "a", 10));
//	printf("%i\n", ft_strncmp("a", "as", 10));
//	printf("%i\n", ft_strncmp("aa", "aa", 10));
//	printf("%i\n", ft_strncmp("aasf", "aasd", 10));
//}
