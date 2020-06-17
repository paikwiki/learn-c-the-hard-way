/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex16.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaek <cbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 17:54:50 by cbaek             #+#    #+#             */
/*   Updated: 2020/06/17 18:26:32 by cbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct			s_person {
	char	*name;
	int		age;
	int		height;
	int		weight;
};

struct s_person	*Person_create(char *name, int age, int height, int weight)
{
	struct s_person *who;

	who = malloc(sizeof(struct s_person));
	assert(who != NULL);
	who->name = strdup(name);
	who->age = age;
	who->height = height;
	who->weight = weight;
	return (who);
}

void			Person_destroy(struct s_person *who)
{
	assert(who != NULL);
	free(who->name);
	free(who);
}

void			Person_print(struct s_person *who)
{
	printf("Name: %s\n", who->name);
	printf("\tAge: %d\n", who->age);
	printf("\tHeight: %d\n", who->height);
	printf("\tWeight: %d\n", who->weight);
}

int				main(int argc, char *argv[])
{
	struct s_person *joe;
	struct s_person *frank;

	joe = Person_create("Joe Alex", 32, 64, 140);
	frank = Person_create("Frank Blank", 20, 72, 180);
	printf("Joe is at memory location %p:\n", joe);
	Person_print(joe);
	printf("Frank is at memory location %p:\n", frank);
	Person_print(frank);
	joe->age += 20;
	joe->height -= 2;
	joe->weight += 40;
	Person_print(joe);
	frank->age += 20;
	frank->weight += 40;
	Person_print(frank);
	Person_destroy(joe);
	Person_destroy(frank);
	return (0);
}
