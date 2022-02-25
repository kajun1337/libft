/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 23:48:02 by muhozkan          #+#    #+#             */
/*   Updated: 2022/02/25 23:48:02 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size);

int main(int argc, char const *argv[])
{
    unsigned int ilk_uzunluk = 25;
	char kaynak[25] = "Success\n";
	char hedef[25] = "Garb\n";
    printf("%d" ,ft_strlcpy(hedef,kaynak,3));
    return 0;
}
