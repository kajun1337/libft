/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:13:05 by muhozkan          #+#    #+#             */
/*   Updated: 2022/02/25 23:35:41 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *word, int latter, size_t length)
{
	size_t	index;
	char	*new_word;

	index = 0;
	new_word = (char *) word;
	while (index < length)
	{
		new_word[index] = latter;
		index++;
	}
	return (new_word);
}
/* verdiğimiz uzunluğa kadar olan kısmı verdiğimiz karakter ile değiştirir 
*/
