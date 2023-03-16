/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:53:17 by cristian          #+#    #+#             */
/*   Updated: 2023/02/12 20:01:54 by cristian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{	
	int	n;
	int	i;

	n = 0;
	i = 0;
	if (str[i] == '\0')
		n = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			n = 1;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			n = 1;
		else
			return (0);
		i++;
	}
	return (n);
}

/*int	main(void)
{
	printf("%d", ft_str_is_alpha("ds_fsdfsfe"));
}*/
