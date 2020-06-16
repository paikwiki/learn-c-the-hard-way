/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex10.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaek <cbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 12:48:45 by cbaek             #+#    #+#             */
/*   Updated: 2020/06/16 13:07:20 by cbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int argc, char *argv[])
{
	int		i;
	char	letter;

	if (argc != 2)
	{
		printf("ERROR: You need one argument.\n");
		return (1);
	}
	i = 0;
	for (i = 0; argv[1][i] != '\0'; i++)
	{
		letter = argv[1][i];
		switch (letter)
		{
			case 'a':
			case 'A':
				printf("%d: 'A'\n", i);
				break ;
			case 'e':
			case 'E':
				printf("%d: 'E'\n", i);
				break ;
			case 'i':
			case 'I':
				printf("%d: 'I'\n", i);
				break ;
			case 'o':
			case 'O':
				printf("%d: 'O'\n", i);
				break ;
			case 'u':
			case 'U':
				printf("%d: 'U'\n", i);
				break ;
			case 'y':
			case 'Y':
				if (i > 0)
				{
					printf("%d: 'Y'\n", i);
				}
				break ;
			default:
				printf("%d: %c is not a vowel.\n", i, letter);
		}
	}
	return (0);
}
