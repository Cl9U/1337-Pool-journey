==========================================================================================
Assignment name  : ft_maze_solver
Expected files   : ft_maze_solver.c
Allowed functions: write, malloc, free, open, read, close
------------------------------------------------------------------------------------------

Write a program that reads a maze from a file (first argument) and finds the
shortest path from 'S' (start) to 'E' (end).

The maze uses:
  '#' for walls
  '.' for open paths
  'S' for start
  'E' for end

Display the maze with the path marked with 'o' characters. If no path exists,
display "No solution".

Example input file:
##########
#S.......#
#.######.#
#.#....#.#
#.#.##.#.#
#.#..#.#.#
#.##.#...#
#....#.#.#
######.#E#
##########

Expected output:
##########
#Soo.....#
#..######.#
#.#....#.#
#.#.##.#.#
#.#..#.#.#
#.##.#ooo#
#....#o#o#
######o#E#
##########
==========================================================================================