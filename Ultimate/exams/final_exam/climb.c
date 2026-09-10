// #include <stdio.h>
// int cli(int n) {
//     if (n <= 2)
// 		return (n);
// 	int i = 1;
// 	int step = 1;
// 	int step1 = 1;
// 	int step2 = 1;

// 	while (i < n)
// 	{
// 		step = step1 + step2;
// 		step2 = step1;
// 		step1 = step;
// 		i++;
// 	}
// 	return (step);
// }

// // int cli(int n)
// // {
// // 	if (n <= 2)
// // 		return (n);
// // 	return (cli(n - 1) + cli(n - 2));
// // }


// int main()
// {
// 	printf("%d\n", cli(4));
// }
// #include <stdio.h>
// #include <stdlib.h>

// int climb(int n, int *memo)
// {
//     if (n == 0)
//         return (1);
//     if (n < 0)
//         return (0);
//     if (memo[n] != -1)
//         return (memo[n]);
//     memo[n] = climb(n - 1, memo) + climb(n - 2, memo);
//     return (memo[n]);
// }

// int main()
// {
//     int n = 4;
//     int *memo = malloc(sizeof(int) * (n + 1));

//     if (!memo)
//         return (1);
// 	for (int i = 0; i <= n; i++)
//         printf("%d\n", memo[i]);
//     for (int i = 0; i <= n; i++)
//         memo[i] = -1;
//     printf("%d\n", climb(n, memo));
//     free(memo);
//     return (0);
// }

// #include <stdio.h>
// #include <stdlib.h>

// int count_ways(int n)
// {
//     if (n == 0)
//         return (1);
//     if (n < 0)
//         return (0);
//     return (count_ways(n - 1) + count_ways(n - 2));
// }

// void fill_paths(int n, int *path, int len, int **paths, int *lengths, int *idx)
// {
//     int i;

//     if (n == 0)
//     {
//         paths[*idx] = malloc(sizeof(int) * len);
//         i = 0;
//         while (i < len)
//         {
//             paths[*idx][i] = path[i];
//             i++;
//         }
//         lengths[*idx] = len;
//         (*idx)++;
//         return;
//     }
//     if (n >= 1)
//     {
//         path[len] = 1;
//         fill_paths(n - 1, path, len + 1, paths, lengths, idx);
//     }
//     if (n >= 2)
//     {
//         path[len] = 2;
//         fill_paths(n - 2, path, len + 1, paths, lengths, idx);
//     }
// }

// int **get_all_paths(int n, int *lengths, int count)
// {
//     int **paths;
//     int *path;
//     int idx;

//     paths = malloc(sizeof(int *) * count);
//     path = malloc(sizeof(int) * n);
//     if (!paths || !path)
//         return (NULL);
//     idx = 0;
//     fill_paths(n, path, 0, paths, lengths, &idx);
//     free(path);
//     return (paths);
// }

// int main()
// {
//     int n;
//     int count;
//     int *lengths;
//     int **paths;
//     int i;
//     int j;

//     n = 4;
//     count = count_ways(n);
//     lengths = malloc(sizeof(int) * count);
//     paths = get_all_paths(n, lengths, count);
//     i = 0;
//     while (i < count)
//     {
//         j = 0;
//         while (j < lengths[i])
//         {
//             printf("%d", paths[i][j]);
//             if (j < lengths[i] - 1)
//                 printf(" ");
//             j++;
//         }
//         printf("\n");
//         free(paths[i]);
//         i++;
//     }
//     free(paths);
//     free(lengths);
//     return (0);
// }

// #include <stdio.h>
// #include <stdlib.h>

// int count_ways(int n)
// {
//     if (n == 0)
//         return (1);
//     if (n < 0)
//         return (0);
//     return (count_ways(n - 1) + count_ways(n - 2));
// }

// void fill(int n, int *path, int len, int *result, int *pos)
// {
//     int i;

//     if (n == 0)
//     {
//         i = 0;
//         while (i < len)
//         {
//             result[*pos] = path[i];
//             (*pos)++;
//             i++;
//         }
//         result[*pos] = -1;
//         (*pos)++;
//         return;
//     }
//     if (n >= 1)
//     {
//         path[len] = 1;
//         fill(n - 1, path, len + 1, result, pos);
//     }
//     if (n >= 2)
//     {
//         path[len] = 2;
//         fill(n - 2, path, len + 1, result, pos);
//     }
// }

// int main()
// {
//     int n = 4;
//     int count = count_ways(n);
//     int *path = malloc(sizeof(int) * n);
//     int *result = malloc(sizeof(int) * count * n);
//     int pos = 0;
//     int i = 0;

//     fill(n, path, 0, result, &pos);
//     while (i < pos)
//     {
//         if (result[i] == -1)
//             printf("\n");
//         else
//             printf("%d ", result[i]);
//         i++;
//     }
//     free(path);
//     free(result);
//     return (0);
// }

#include <stdio.h>
#include <stdlib.h>

void climb(int n, int path[], int len)
{
    int i;

    if (n == 0)
    {
        i = 0;
        while (i < len)
        {
            printf("%d", path[i]);
            if (i < len - 1)
                printf(" ");
            i++;
        }
        printf("\n");
        return;
    }
    if (n >= 1)
    {
        path[len] = 1;
        climb(n - 1, path, len + 1);
    }
    if (n >= 2)
    {
        path[len] = 2;
        climb(n - 2, path, len + 1);
    }
}

int main(int ac, char **av)
{
    int n = atoi(av[1]);
    int path[100];

    climb(n, path, 0);
    return (0);
}