/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:47:15 by cristian          #+#    #+#             */
/*   Updated: 2023/02/11 20:06:47 by cristian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	n;

	n = 0;
	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	while (dest[n] != '\0')
		dest[n] = '\0';
	return (dest);
}

/*int	main()
{
	char	dest[] = "Holassssss";
	char	src[] = "mundo";
	int		n = 0;

	ft_strcpy(dest, src);
	while (dest[n] != '\0')
	{
		printf("%c", dest[n]);
		n++;
	}
}*/
