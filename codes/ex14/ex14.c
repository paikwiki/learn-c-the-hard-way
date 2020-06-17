/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex14.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaek <cbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 12:36:42 by cbaek             #+#    #+#             */
/*   Updated: 2020/06/17 12:51:48 by cbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int		can_print_it(char ch);
void	print_letters(char arg[]);

void	print_arguments(int argc, char *argv[])
{
	int	i;

	for (i = 0; i < argc; i++)
	{
		print_letters(argv[i]);
	}
}

void	print_letters(char arg[])
{
	int	i;
	char ch;

	for (i = 0; arg[i] != '\0'; i++)
	{
		ch = arg[i];
		if (can_print_it(ch))
		{
			printf("'%c' == %d ", ch, ch);
		}
	}
	printf("\n");
}

int		can_print_it(char ch)
{
	return (isalpha(ch) || isblank(ch));
}

int		main(int argc, char *argv[])
{
	print_arguments(argc, argv);
	return (0);
}
