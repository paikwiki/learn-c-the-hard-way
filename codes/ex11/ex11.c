/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex11.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaek <cbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 13:08:32 by cbaek             #+#    #+#             */
/*   Updated: 2020/06/16 13:21:11 by cbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int argc, char *argv[])
{
	int		numbers[4] = { 0 };
	char	name[4] = { 'a' };
	char	*another = "Zed";

	printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2],
			numbers[3]);
	printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
	printf("name: %s\n", name);
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;
	name[0] = 'Z';
	name[1] = 'e';
	name[2] = 'd';
	name[3] = '\0';
	printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2],
			numbers[3]);
	printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
	printf("name: %s\n", name);
	printf("another: %s\n", another);
	printf("another each: %c %c %c %c\n", another[0], another[1], another[2],
			another[3]);
	return (0);
}
