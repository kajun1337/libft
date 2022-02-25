/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 23:47:41 by muhozkan          #+#    #+#             */
/*   Updated: 2022/02/25 23:47:41 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strdup(const char *str);

int main(int argc, char const *argv[])
{
    char orjinal_string[100] = "Fenito Cagare Resulte importante/ yani haticeye degil neticeye bak";
	char *kopya_pointer;

	kopya_pointer = ft_strdup(orjinal_string);
	printf("%s\n", kopya_pointer);
	printf("----------\n");
    return 0;
}
