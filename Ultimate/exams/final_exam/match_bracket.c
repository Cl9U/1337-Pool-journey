int ft_valid_brackets(char *str)
{
	char stack[1000];
	int top;
	int i;

	top = -1;
	i = 0;
	while (str[i])
	{
		if (str[i] == '(' || str[i] == '[' || str[i] == '{')
		{
			top++;
			stack[top] = str[i];
		}
		else if (str[i] == ')' || str[i] == ']' || str[i] == '}')
		{
			if (top < 0)
				return (0);
			if ((str[i] == ')' && stack[top] != '(')
				|| (str[i] == ']' && stack[top] != '[')
				|| (str[i] == '}' && stack[top] != '{'))
				return (0);
			top--;
		}
		i++;
	}
	return (top == -1);
}


