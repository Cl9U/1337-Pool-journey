==========================================================================================
Assignment name  : ft_mini_paint
Expected files   : ft_mini_paint.c
Allowed functions: write, malloc, free, fopen, fclose, fread
------------------------------------------------------------------------------------------

Write a program that reads a configuration file (passed as first argument)
describing circles to draw on a character canvas.

The first line of the file contains: width height background_char
Each subsequent line describes a circle: type x y radius char

type is either 'C' (filled circle) or 'c' (empty circle - outline only).
x and y are the center coordinates (floats).
radius is the radius (float).
char is the character to use for drawing.

A point belongs to a filled circle if its distance to the center is <= radius.
A point belongs to an empty circle outline if its distance to the center is
between radius - 1.0 and radius (inclusive).

If there is an error (wrong args, bad file, bad format), display
"Error: Operation file corrupted" followed by a newline on stderr.

Example config file:
20 10 .
C 10.0 5.0 4.0 #
c 10.0 5.0 3.0 o
==========================================================================================