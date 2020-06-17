/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex13.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaek <cbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 12:25:06 by cbaek             #+#    #+#             */
/*   Updated: 2020/06/17 12:34:22 by cbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int argc, char *argv[])
{
	int		i;
	int		num_states;
	char	*states[] = {
		"Califonia", "Oregon",
		"Washingtion", "Texas"
	};

	for (i = 1; i < argc; i++)
	{
		printf("arg %d: %s\n", i, argv[i]);
	}
	num_states = 4;
	for (i = 0; i < num_states; i++)
	{
		printf("state %d: %s\n", i, states[i]);
	}
	return (0);
}
