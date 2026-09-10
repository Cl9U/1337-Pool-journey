/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

 

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

Example 2:

Input: nums = [0]
Output: [0]

*/

#include <stdio.h>
#include <unistd.h>

int main()
{
	int n[] = {0,1,0,3,12};
	int s = 5;

	int i;
	int j;
	int tmp;

	i = 0;
	while (i < s)
	{
		j = i + 1;
		while (j < s)
		{
			if (n[i] == 0)
			{
				tmp = n[i];
				n[i] = n[j];
				n[j] = tmp;
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (i < s)
	{
		printf("%d ", n[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int n[ac - 1];
	int s = ac - 1;

	int i;
	int j;
	int tmp;

	i = 0;
	while (i < ac)
	{
		n[i] = atoi(av[i]);
		i++;
	}

	i = 0;
	while (i < s)
	{
		j = i + 1;
		while (j < s)
		{
			if (n[i] == 0)
			{
				tmp = n[i];
				n[i] = n[j];
				n[j] = tmp;
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (i < s)
	{
		printf("%d ", n[i]);
		i++;
	}
	return (0);
}