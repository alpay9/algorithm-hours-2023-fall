# Cycle Detection

### Question:
Given a (0-indexed) cylindiric array of non-zero numbers, you can only move from one index to another if distance between these two indexes equals to the value on that index. Detect if there is a loop or not. <br>
If sum of value and index exceeds the size of array, you will start from the beginning, because the array is cylindiric (think it as the world map, when you are going west only, after let's say america, you will find yourself at japan, east most side of the map).

<details>
	<summary>Example:</summary>
	array: [1,2,3,4] <br> <br>
	You can move from: (curr idx + val = next idx) <br>
	0th index to 1st index (0 + 1 = 1) <br>
	1th index to 3rd index (1 + 2 = 3) <br>
	2nd index to 1st index (2 + 3 = 5, which is out of range, but don't forget that the array is cyclindiric, so index 4 is actually index 0, and index 5 is actually index 1) <br>
	3rd index to 3rd index (3 + 4 = 7, because it is cylindiric, we are actually at index 3) <br>
	In this last example we are actually not moving therefore it is not considered as a loop.
</details>


<details>
	<summary>Hint 1:</summary>
	Think this as a graph.
</details>

<details>
	<summary>Hint 2:</summary>
	if there is a last node where you can't go anywhere any node you can reach to that node is not in a cycle.
</details>

<details>
	<summary>Hint 3:</summary>
	You need to check all nodes if they are in a cycle or not, but be careful with unnecessary repetition.
</details>


```c++
using namespace std;

bool detectCycle(vector<int>& nums){
	// write your code here

}
```

[Solution](S1_Cycle_Detection.cpp) (To be added...)
