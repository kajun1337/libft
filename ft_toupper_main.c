/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 23:49:06 by muhozkan          #+#    #+#             */
/*   Updated: 2022/02/25 23:49:06 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_toupper(int ch);

int main(void)
{

	printf("%d\n", toupper('c')); //test icin ana fonksiyon
	printf("%d\n", ft_toupper('c'));
	printf("+++++++++\n");
}