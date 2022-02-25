/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 23:46:34 by muhozkan          #+#    #+#             */
/*   Updated: 2022/02/25 23:46:34 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

void	*ft_calloc(size_t count, size_t size);

int main(void)
{
  char    *a;
  a = ft_calloc(5, sizeof(char));
  int i = 0;
  while(i < 5)
  {
     printf("%d", a[i]);
     i++;
  }
}