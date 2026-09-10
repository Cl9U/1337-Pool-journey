int climbing_stairs(int n)
{
	if (n <= 2)
		return (n);
	return (climbing_stairs(n - 1) + climbing_stairs(n - 2));
}

int climbing_stairs(int n)
{
	if (n <= 2)
		return (n);
	int curr = 1;
	int pre1 = 1;
	int pre2 = 1;
	int i = 1;
	while (i < n)
	{
		curr = pre1 + pre2;
		pre2 = pre1;
		pre1 = curr;
		i++;
	}
	return (curr);
}