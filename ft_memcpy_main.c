/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 23:47:11 by muhozkan          #+#    #+#             */
/*   Updated: 2022/02/25 23:47:11 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);

int	main()
{
	unsigned char	src[] = " world!";
	unsigned char	dst[] = "hello";

	ft_memcpy(dst+5, src, 8);
	printf("%s", dst);
}