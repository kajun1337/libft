/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 23:46:58 by muhozkan          #+#    #+#             */
/*   Updated: 2022/02/25 23:46:58 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_itoa(int n);

int main(void)
{
	printf("%s\n", ft_itoa(-2312));
    printf("%s\n", ft_itoa(2312));
	printf("%s\n", ft_itoa(-231212121));
    printf("%s\n", ft_itoa(122312));
    printf("%s\n", ft_itoa(0));
    printf("%s\n", ft_itoa(42));
}