/* 
14. longest_run
---------------

Write a program that receives exactly one string.

Print:

- The character belonging to the longest consecutive group.
- One space.
- The size of that group.
- A newline.

If several groups have the same maximum length, print the first one.

Example:

./longest_run "aabbbbccdddd"

Output:

b 4
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	write(1, "\n", 1);
}