/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 23:47:15 by muhozkan          #+#    #+#             */
/*   Updated: 2022/02/25 23:47:15 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n);

int	main()
{
	unsigned char	src[] = "isg";
    const char dst[] = "sorunu";
	ft_memmove(src + 3, src,2);
	printf("%p", dst);
}