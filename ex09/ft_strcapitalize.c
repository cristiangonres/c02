/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 19:40:20 by cristian          #+#    #+#             */
/*   Updated: 2023/02/12 21:08:45 by cristian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	n;

	n = 1;
	if (str[0] >= 97 && str[0] <= 122)
		str[0] = str[0] - 32;
	while (str[n] != '\0')
	{
		if (str[n] < 65 || (str[n] > 90 && str[n] < 97) || str[n] > 122)
		{
			while (str[n] < 65 || (str[n] > 90 && str[n] < 97) || str[n] > 122)
				n++;
			if (str[n] >= 97 && str[n] <= 122)
				str[n] = str[n] - 32;
		}
		else if (str[n] >= 65 && str[n] <= 90)
			str[n] = str[n] + 32;
		n++;
	}
	return (str);
}

/*int	main(void)
{
	int		i;

	i = 0;
	char w[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char *str = ft_strcapitalize(w);
	printf("%s", str);
}*/
