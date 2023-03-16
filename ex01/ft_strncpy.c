/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:21:58 by cristian          #+#    #+#             */
/*   Updated: 2023/02/12 20:39:51 by cristian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}

/*int	main(void)
{
	char dest[]  = "Co";
	char src[] = "Fetos";
	int index = 0;
	unsigned int	a = 3;
	
	ft_strncpy(dest, src, a);
	while (dest[index] != '\0')
	{	
		printf("%c", dest[index]);
		index++;
	}
	return 0;
}*/
