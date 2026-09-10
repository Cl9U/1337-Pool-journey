int ft_pow(int nb, int power)
{
	int sum = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (--power)
		sum *= nb;
	return (sum);
}
