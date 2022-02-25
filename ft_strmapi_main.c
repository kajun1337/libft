/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 23:48:10 by muhozkan          #+#    #+#             */
/*   Updated: 2022/02/25 23:48:10 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char f(unsigned int a, char b) //harfleri büyütme için kullanılan f fonksiyonu
{
	b = 0;
	return ('A' + (char)a);
}
int    main()
{
    char    s1[] = "abc";
    char    *s2;
    s2 = ft_strmapi(s1, *f); // printf("%s", ft_strmapi("abc", *f)) bu da olur. 
    printf("%s", s2);
}