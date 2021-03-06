/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex18.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaek <cbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 14:36:57 by cbaek             #+#    #+#             */
/*   Updated: 2020/06/18 15:43:21 by cbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

void		die(const char *message)
{
	if (errno)
		perror(message);
	else
		printf("ERROR: %s\n", message);
	exit(1);
}

typedef int	(*compare_cb) (int a, int b);

int			*bubble_sort(int *numbers, int count, compare_cb cmp)
{
	int	temp;
	int	i;
	int	j;
	int	*target;

	temp = 0;
	target = malloc(count * sizeof(int));
	if (!target)
		die("Memory error.");
	memcpy(target, numbers, count * sizeof(int));
	for (i = 0; i < count; i++)
	{
		for (j = 0; j < count - 1; j++)
		{
			if (cmp(target[j], target[j + 1]) > 0)
			{
				temp = target[j + 1];
				target[j + 1] = target[j];
				target[j] = temp;
			}
		}
	}
	return (target);
}

int			sorted_order(int a, int b)
{
	return (a - b);
}

int			reverse_order(int a, int b)
{
	return (b - a);
}

int			strange_order(int a, int b)
{
	if (a == 0 || b == 0)
		return (0);
	else
		return (a % b);
}

void		test_sorting(int *numbers, int count, compare_cb cmp)
{
	int i;
	int *sorted;

	sorted = bubble_sort(numbers, count, cmp);
	if (!sorted)
		die("Failed to sort as requested.");
	for (i = 0; i < count; i++)
		printf("%d ", sorted[i]);
	printf("\n");
	free(sorted);
}

int			main(int argc, char *argv[])
{
	int		count;
	int		i;
	char	**inputs;
	int		*numbers;

	if (argc < 2)
		die("USAGE: ex18 4 3 1 5 6");
	count = argc - 1;
	inputs = argv + 1;
	numbers = malloc(count * sizeof(int));
	if (!numbers)
		die("Memory error.");
	for (i = 0; i < count; i++)
		numbers[i] = atoi(inputs[i]);
	test_sorting(numbers, count, sorted_order);
	test_sorting(numbers, count, reverse_order);
	test_sorting(numbers, count, strange_order);
	free(numbers);
	return (0);
}
