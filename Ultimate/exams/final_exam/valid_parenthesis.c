int valid_parenthesis(char *str)
{
	char stak[1000];
	int i = 0;
	int top = -1;
	char c;
	char l;
	while (str[i])
	{
		c = str[i];
		if (c == '(' || c == '{' || c == '[')
			stak[++top] = c;
		else
		{
			if (top == -1)
				return (0);
			l = stak[top--];
			if (c == ')' && l != '('
				|| c == '}' && l != '{'
				|| c == ']' && l != '[')
				return (0);
		}
		i++;
	}
	return (top == -1);
}