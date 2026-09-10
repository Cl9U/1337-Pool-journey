int maximumGap(int* nums, int numsSize)
{
	int i;
	int j;
	int tmp;
	int gap;

	if (numsSize < 2)
		return (0);
	i = 0;
	while (i < numsSize - 1)
	{
		j = i + 1;
		while (j < numsSize)
		{
			if (nums[i] > nums[j])
			{
				tmp = nums[i];
				nums[i] = nums[j];
				nums[j] = tmp;
			}
			j++;
		}
		i++;
	}
	gap = 0;
	i = 0;
	while (i < numsSize - 1)
	{
		if (nums[i + 1] - nums[i] > gap)
			gap = nums[i + 1] - nums[i];
		i++;
	}
	return (gap);
}