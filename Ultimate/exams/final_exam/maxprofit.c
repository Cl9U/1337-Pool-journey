/*
121. Best Time to Buy and Sell Stock
Easy
Topics
premium lock iconCompanies

You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

 

Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

Example 2:

Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.

 

Constraints:

    1 <= prices.length <= 105
    0 <= prices[i] <= 104
*/

int maxProfit(int* prices, int pricesSize) {
    int pro;
	int sum;

	pro = 0;
	sum = 0;

	int i;
	int j;
	i = 0;
	while (i < pricesSize)
	{
		j = i + 1;
		while (j < pricesSize)
		{
			sum = prices[j] - prices[i];
			if (sum > pro)
				pro = sum;
			sum = 0;
			j++;
		}
		i++;
	}
	return (pro);
}

#include <stdio.h>

int main()
{
	int prices[] = {7,1,5,3,6,4};
	printf("%d\n",maxProfit(prices,6));
}

// int maxProfit(int* prices, int pricesSize) {
//     int min_price;
//     int pro;
//     int i;

//     if (pricesSize == 0)
//         return (0);
//     min_price = prices[0];
//     pro = 0;
//     i = 1;
//     while (i < pricesSize)
//     {
//         if (prices[i] - min_price > pro)
//             pro = prices[i] - min_price;
//         if (prices[i] < min_price)
//             min_price = prices[i];
//         i++;
//     }
//     return (pro);
// }