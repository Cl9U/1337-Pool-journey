==========================================================================================
Assignment name  : ft_sudoku_solver
Expected files   : ft_sudoku_solver.c
Allowed functions: write
------------------------------------------------------------------------------------------

Write a program that takes as arguments 9 strings of 9 characters each,
representing the 9 rows of a Sudoku grid. Empty cells are represented by '.'.

If a valid solution exists, display the completed grid. Otherwise display
"Error".

Use backtracking to solve the puzzle.

Examples:

$>./ft_sudoku_solver "53..7...." "6..195..." ".98....6." "8...6...3" "4..8.3..1" "7...2...6" ".6....28." "...419..5" "....8..79"
534678912
672195348
198342567
859761423
426853791
713924856
961537284
287419635
345286179
$>./ft_sudoku_solver "99..7...." "6..195..." ".98....6." "8...6...3" "4..8.3..1" "7...2...6" ".6....28." "...419..5" "....8..79"
Error
==========================================================================================