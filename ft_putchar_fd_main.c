/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd_main.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 23:47:23 by muhozkan          #+#    #+#             */
/*   Updated: 2022/02/25 23:47:23 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fcntl.h"
#include <stdio.h>

void	ft_putchar_fd(char c, int fd);

int main(int argc, char const *argv[])
{
	int fd = open("txtforexample",O_WRONLY);
	ft_putchar_fd('c',fd);
	return 0;
}