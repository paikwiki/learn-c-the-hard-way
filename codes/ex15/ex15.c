/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex15.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaek <cbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 17:10:20 by cbaek             #+#    #+#             */
/*   Updated: 2020/06/17 17:44:54 by cbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int argc, char *argv[])
{
	int		ages[] = { 23, 43, 12, 89, 2 };
	char	*names[] = {
		"Alan", "Frank",
		"Mary", "John", "Lisa"
	};
	int		count;
	int		i;
	int		*cur_age;
	char	**cur_name;

	count = sizeof(ages) / sizeof(int);
	for (i = 0; i < count; i++)
	{
		printf("%s has %d years alive.\n", names[i], ages[i]);
	}
	printf("---\n");
	cur_age = ages;
	cur_name = names;
	for (i = 0; i < count; i++)
	{
		printf("%s is %d years old.\n", *(cur_name + i), *(cur_age + i));
	}
	printf("---\n");
	for (i = 0; i < count; i++)
	{
		printf("%s is %d years old again.\n", cur_name[i], cur_age[i]);
	}
	printf("---\n");
	for (cur_name = names, cur_age = ages;
			(cur_age - ages) < count; cur_name++, cur_age++)
	{
		printf("%s lived %d years so far.\n", *cur_name, *cur_age);
	}
	return (0);
}
