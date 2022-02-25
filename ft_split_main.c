/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 23:47:31 by muhozkan          #+#    #+#             */
/*   Updated: 2022/02/25 23:47:31 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split(char const *s, char c);

int	main()
{
	char	**a;
    printf("bolunmeden once:tarih,tekerrur,edecek\n");
    a = ft_split("tarih,tekerrur,edecek", ',');
	int	i = 0;
	while (a[i] != NULL)
		printf("%s\n", a[i++]);
		return (0);	
}