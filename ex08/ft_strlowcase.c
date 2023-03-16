/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 15:21:46 by cristian          #+#    #+#             */
/*   Updated: 2023/02/11 19:56:56 by cristian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{		
		if (str[n] >= 65 && str[n] <= 90)
			str[n] = str[n] + 32;
		n++;
	}
	return (str);
}

/*int	main(void)
{
	int		i;

	i = 0;
	char w[] = "CRISTIan";
	char *str = ft_strlowcase(w);;
	printf("%s", str);
}*/
