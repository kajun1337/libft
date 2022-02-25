/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri_main.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 23:47:44 by muhozkan          #+#    #+#             */
/*   Updated: 2022/02/25 23:47:44 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *));

char f(unsigned int a, char b)
{
	a = 0;
	return (b * 2);
}

int main(int argc, char const *argv[])
{	
    const char *p = "123";
printf("%p|\n", ft_striteri(p,f));
	printf("----------\n");
	return 0;
}