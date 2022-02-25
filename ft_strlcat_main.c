/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 23:47:58 by muhozkan          #+#    #+#             */
/*   Updated: 2022/02/25 23:47:58 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcat(char *dest, char *src, size_t size);

int    main()
{
  char  dest[20] = "vlademir";
  char  src[10] = "bush";
  
  printf("Birlesmeden once string: \"%s\"\n", dest);
  printf("\n%d\n", ft_strlcat(dest, src, 14));
  printf("\nBirlesmeden sonra string: \"%s\"\n", dest);
}