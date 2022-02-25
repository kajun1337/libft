/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 23:49:03 by muhozkan          #+#    #+#             */
/*   Updated: 2022/02/25 23:49:03 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tolower(int ch);

int main(void)
{

	printf("%d\n", tolower('c')); //test icin
	printf("%d\n", ft_tolower('c'));
	printf("********\n");
}