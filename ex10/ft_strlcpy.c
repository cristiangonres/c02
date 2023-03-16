/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 20:07:32 by cristian          #+#    #+#             */
/*   Updated: 2023/02/12 19:32:21 by cristian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	i;

	i = 0;
	index = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	while (index < size)
	{
		dest[index] = src[index];
		index++;
	}
	while (dest[index] != '\0')
		dest[index] = '\0';
	return (i);
}

/*int	main(void)
{
	char dest[]  = "Cocido";
	char src[] = "Fetos";
		
	printf("%lu", strlcpy(dest, src, 3));
	printf("%u", ft_strlcpy(dest, src, 3));
	printf("%s", dest);
	return 0;
}*/
