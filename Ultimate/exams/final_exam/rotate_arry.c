void swap (int *arr, int first, int last)
{
	int t;
	while (first < last)
	{
		t = arr[first];
		arr[first] = arr[last];
		arr[last] = t;
		first++;
		last--;
	}
}

void rotate(int* nums, int size, int k)
{
	k = k % size;

	swap (nums, 0, size - 1);
	swap (nums, 0, k - 1);
	swap (nums, k, size - 1);

}