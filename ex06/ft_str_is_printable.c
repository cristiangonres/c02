/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 13:02:24 by cristian          #+#    #+#             */
/*   Updated: 2023/02/12 20:49:15 by cristian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	n;
	int	i;

	i = 0;
	n = 1;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			n = 0;
		i++;
	}
	return (n);
}

/*int	main(void)
{
	printf("%d", ft_str_is_printable("iasd"));
}*/
