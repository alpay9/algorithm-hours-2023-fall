# Cycle Detection

### Question:
Given an alien dictionary, the words inside the dictionary are sorted lexicographically. Return an array representing the alien alphabet in any possible order.

<details>
	<summary>Example:</summary>
	Dictionary: ["send", "sgnl"] <br> <br>
	By looking at the first word "send", we can say that 's' comes before 'e', 'e' comes before 'n', 'n' comes before 'd' <br>
	By looking at the second word "sgnl", we can say that 's' comes before 'g', 'g' comes before 'n', 'n' comes before 'l' <br>
	One possible alphabet can be [s, e, g, n, d, l]
</details>


<details>
	<summary>Hint 1:</summary>
	Think this as a graph.
</details>

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

bool detectCycle(vector<int>& nums){
	// write your code here

}
```

[Solution](S1_Cycle_Detection.cpp)
