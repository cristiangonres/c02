/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 19:37:19 by cristian          #+#    #+#             */
/*   Updated: 2023/02/11 21:17:23 by cristian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	n;
	int	i;

	i = 0;
	n = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			n = 0;
		i++;
	}
	return (n);
}

/*int	main(void)
{
	printf("%d", ft_str_is_lowercase("i"));
}*/
