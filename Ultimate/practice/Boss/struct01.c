#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


void ft_putnbr(int n)
{
	long nn;
	char c;
	
	nn = n;
	if (nn < 0)
	{
		write(1, "-", 1);
		nn = -nn;
	}
	if (nn >= 10)
	ft_putnbr(nn / 10);
	c = nn % 10 + '0';
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}

// typedef struct s_person
// {
// 	char	*name;
// 	int		age;
// 	int		height;
// }	t_person;

// int	main(void)
// {
// 	t_person person;

// 	person.name = "salah";
// 	person.age = 24;
// 	person.height = 7;

// 	int i = 0;
// 	while (person.name[i])
// 	{
// 		write(1, &person.name[i], 1);
// 		i++;
// 	}
// 	write(1, "\n", 1);
// 	ft_putnbr(person.age);
// 	write(1, "\n", 1);
// 	ft_putnbr(person.height);
// 	write(1, "\n", 1);
// 	return (0);
// }

// #include <unistd.h>

// typedef struct s_person
// {
// 	char	*name;
// 	int		age;
// }	t_person;

// int	main(void)
// {
// 	t_person person;
// 	t_person *ptr;

// 	person.name = "Salah";
// 	person.age = 24;

// 	ptr = &person;

// 	// TODO: print the age using ptr
// 	ft_putstr (ptr->name);
// 	write(1, "\n", 1);
// 	ptr->age = 25;
// 	ft_putnbr(ptr->age);
// 	write(1, "\n", 1);
// 	// TODO: change the age to 25 using ptr
// 	// TODO: print the new age using ptr

// 	return (0);
// }

// #include <unistd.h>
// #include <stdlib.h>

// typedef struct s_person
// {
// 	char	*name;
// 	int		age;
// }	t_person;

// int	main(void)
// {
// 	t_person	*person;

// 	// TODO: allocate memory for one t_person
// 	person = malloc(sizeof(t_person));
// 	// TODO: set name to "Salah"
// 	person->name = "salah";
// 	// TODO: set age to 24
// 	person->age = 24;
// 	// TODO: print the age
// 	ft_putnbr(person->age);
// 	// TODO: free the memory
// 	free(person);
// 	return (0);
// }

// #include <unistd.h>
// #include <stdlib.h>

// typedef struct s_node
// {
// 	int				value;
// 	struct s_node	*next;
// }	t_node;

// int	main(void)
// {
// 	t_node	*node;

// 	node = malloc(sizeof(t_node));
// 	if (!node)
// 		return (1);
// 	// TODO: put 42 inside value
// 	node->value = 42;
// 	// TODO: make next point to nothing
// 	node->next = NULL;
// 	// TODO: print value
// 	ft_putnbr(node->value);
// 	free(node);
// 	return (0);
// }

// typedef struct s_node
// {
// 	int				value;
// 	struct s_node	*next;
// }	t_node;

// int	main(void)
// {
// 	t_node	*first;
// 	t_node	*second;

// 	first = malloc(sizeof(t_node));
// 	second = malloc(sizeof(t_node));

// 	first->value = 42;
// 	second->value = 100;

// 	// TODO: connect first to second
// 	first->next = second;
// 	// TODO: make second the end of the list
// 	second->next = NULL;
// 	// print first value
// 	ft_putnbr(first->value);
// 	write(1, "\n", 1);

// 	// print second value
// 	ft_putnbr(first->next->value);
// 	write(1, "\n", 1);

// 	free(first);
// 	free(second);

// 	return (0);
// }


typedef struct s_node
{
	int				value;
	struct s_node	*next;
}	t_node;

int	main(void)
{
	t_node	*first;
	t_node	*second;
	t_node	*third;
	t_node	*fourth;
	t_node	*current;

	first = malloc(sizeof(t_node));
	second = malloc(sizeof(t_node));
	third = malloc(sizeof(t_node));
	fourth = malloc(sizeof(t_node));

	first->value = 42;
	second->value = 100;
	third->value = 7;
	fourth->value = 99;

	first->next = second;
	second->next = third;
	third->next = fourth;
	fourth->next = NULL;

	current = first;

	// TODO: traverse the list and print every value
	while (current != NULL)
	{
		ft_putnbr(current->value);
		current = current->next;
	}
	
	free(first);
	free(second);
	free(third);
	free(fourth);

	return (0);
}