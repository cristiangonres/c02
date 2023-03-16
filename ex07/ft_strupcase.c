/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 15:18:00 by cristian          #+#    #+#             */
/*   Updated: 2023/02/11 19:59:00 by cristian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= 97 && str[n] <= 122)
		str[n] = str[n] - 32;
		n++;
	}
	return (str);
}

/*int	main(void)
{
	int		i;

	i = 0;
	char w[] = "holAZ";
	char *str = ft_strupcase(w);
	printf("%s", str);
}*/
