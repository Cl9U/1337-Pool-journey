int max_sub_array(int *arr, int size)
{
	int max;
	int i;
	int sub;
	int j;

	i = 0;
	max = arr[0];
	sub = arr[0];
	while (i < size )
	{
		j = i;
		sub = 0;
		while (j < size )
		{
			sub += arr[j];
			if (max < sub)
				max = sub;
			j++;
		}
		i++;
	}
	return (max);
}

#include <stdio.h>
int main()
{
	int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
	int size = 9;

	printf("%d",max_sub_array(arr, size));
}
//shift %= 26;
//if (shift < 0)
//	shift += 26;


