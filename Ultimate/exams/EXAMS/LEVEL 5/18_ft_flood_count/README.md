==========================================================================================
Assignment name  : ft_flood_count
Expected files   : ft_flood_count.c
Allowed functions: write, malloc, free
------------------------------------------------------------------------------------------

Write a program that takes a 2D grid (each row as a separate argument) and
a position (last two arguments: row col), and displays the number of cells
reachable from that position by flood fill, followed by a newline.

The grid uses:
  '.' for open cells (can be filled)
  '#' for walls (cannot be filled)

The flood can spread up, down, left, and right (not diagonally).
The starting cell counts as 1 if it is open, 0 if it is a wall.

If arguments are invalid, display "Error" followed by a newline.

Examples:

$>./ft_flood_count "..#.." "..#.." "#####" "....." "....." "0" "0" | cat -e
4$
$>./ft_flood_count "....." "....." "....." "0" "0" | cat -e
15$
$>./ft_flood_count "..#.." "2" "2" | cat -e
0$
==========================================================================================