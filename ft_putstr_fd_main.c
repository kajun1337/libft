/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 23:47:27 by muhozkan          #+#    #+#             */
/*   Updated: 2022/02/25 23:47:27 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>

void	ft_putstr_fd(char const *s, int fd);

int main(int argc, char const *argv[])
{
	int fd = open("txtforexample",O_WRONLY);
	ft_putstr_fd("42foryou",fd);
	return 0;
}