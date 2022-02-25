/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 23:47:19 by muhozkan          #+#    #+#             */
/*   Updated: 2022/02/25 23:47:19 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *word, int latter, size_t length);

int	main()
{
	unsigned char	b[] = "vlademir";
	ft_memset(b, 'a', 4);
	printf("%s", b);
}