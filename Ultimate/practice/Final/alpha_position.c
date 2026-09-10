/* 
RLE MOVEMENTS SUMMARY
---------------------

unique_runs      -> print one character for each group
count_runs       -> detect when a group starts and ends
collapse_runs    -> skip the remaining characters of a group
rle              -> count consecutive equal characters
repeated_runs    -> process only repeated groups
longest_run      -> compare each completed group with the maximum
rle_decode       -> repeat a character using a stored count
same_run_pattern -> traverse groups in two strings independently


==================================================
PART 3 — VIGENERE AND CIPHER MOVEMENTS
==================================================

17. alpha_position
------------------

Write a program that receives exactly one character.

Print its alphabetical position:

a or A -> 0
b or B -> 1
...
z or Z -> 25

If the argument is not exactly one alphabetical character, print only a newline.

Examples:

./alpha_position "a"
0

./alpha_position "D"
3

./alpha_position "z"
25

*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac != 2 || av[1][1] != '\0')
	{
		write(1, "\n", 1);
		return (0);
	}
	char c = av[1][0];
	int i;
	if (c >= 'a' && c <= 'z')
		i = c - 'a';
	else if (c >= 'A' && c <= 'Z')
		i = c - 'A';
	printf("%d\n", i);
	//write(1, "\n", 1);
}