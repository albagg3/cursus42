/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:26:10 by albagarc          #+#    #+#             */
/*   Updated: 2022/05/30 09:11:18 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char **ft_split(const char *s, char c);
int	main()
{
	char const *s ="      split       this for   me  !       ";
	char c;
	char **result;
	int count;
	c = ' ';
//	count = 0;
	result = ft_split(s, c);
//	result = ft_splittest(s,c);
	printf("valor de result posicion 0: %s\n", result[0]);
	count = 0;
	while(result[count])
	{
		printf("ha entrado\n");
		printf("|%s|", result[count]);
		count++;
	}
	return(0);
}
