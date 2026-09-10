int search_insert(int *arr, int size, int target)
{
	int i = 0;
	while (i < size)
	{
		if (arr[i] >= target)
			return (i);
		i++;
	}
	return (size);
}
#include <stdio.h>
int main()
{
	int arr[] = {1,3,5,6};
	int s = 5;
	int t = 9;
	printf("%d", search_insert(arr,s,t));
}