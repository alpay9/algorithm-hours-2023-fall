# Cycle Detection

### Question:
Given an array representing a stock's value for each day. Your goal is to find out maximum profit you can make by buying and selling the stock once. (You can only sell a stock if you have one.)

<details>
	<summary>Example:</summary>
	arr: [3,6,2,4,7] <br>
	answer: 5 (buying at value 2, and selling it at value 7)
</details>

### Follow-up 1:
What if you are not limited with 1 buy and 1 sell in total. But maximum amount of stock you can hold is 1, in other words, you can't buy a stock if you already have a stock.

<details>
	<summary>Hint:</summary>
	One possible approach could be recursively trying all possible options, for every day you have two options (you can either skip that day by doing nothing, or you can do a transaction, if you have a stock you can sell it, if you don't have a stock, you can buy it), but time complexity will be O(2^n). <br>
	To make it more optimized you can,
</details>

### Follow-up 2:
On top of everything, what if you are only limited with 4 transactions in total. (2 buy, 2 sell)



<details>
	<summary>Hint 2:</summary>
	You can remove nodes from our graph one by one, and add them to the alphabet. Be careful when removing nodes!
</details>

<details>
	<summary>Hint 3:</summary>
	Before removing a node, you need to check if that node has any dependency or not, for efficieny, you can have a queue of nodes with no dependency remaining.
</details>


```c++
using namespace std;

int maxEarning(vector<int>& nums){
	// write your code here

}
```

[Solution](S1_Cycle_Detection.cpp) (To be added...)
