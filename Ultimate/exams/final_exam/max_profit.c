int max_profit(int *prices, int size)
{
	int i;
	int j;
	int pro;
	int sum;
	i = 0;
	pro = 0;
	sum = 0;
	while (i < size)
	{
		j = i + 1;
		sum = 0;
		while (j < size)
		{
			sum = prices[j] - prices[i];
			if (pro < sum)
				pro = sum;
			j++;
		}
		i++;
	}
	return (pro);
}
#include <stdio.h>
int main()
{
	int arr[] = {7, 1, 5, 3, 6, 4};
	int size = 6;
	printf("%d", max_profit(arr, size));
}