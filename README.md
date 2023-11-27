# Algorithm-Hours-2023-Fall


### Week 1

<details>
  <summary>What does algorithm and algorithmic thinking mean?</summary>
  &emsp; Algorithm is a set of steps to accomplish a specific task, it is the logical connection between input and output. Cooking recipes, and GPS directions are examples of algorithms. <br>
  &emsp; Algorithmic thinking is a methodical approach to problem-solving using algorithms. Abstraction, decomposition, pattern recognition, and algorithm design are the key concepts of algorithmic thinking.
</details>

[BST Inorder Successor](Week1/Q1_BST_Inorder_Successor.md) <br>
[Infinite Chessboard](Week1/Q2_Infinite_Chessboard.md) <br>
[Matrix Sum](Week1/Q3_Matrix_Sum.md) (To be added...)

### Week 2

<details>
  <summary>What is complexity of an algorithm?</summary>
  &emsp; We said that algorithm is the steps between given input and desired output last week. Different algorithms can be used to achieve the same result, and complexity is the measure we used to determine which one is more efficient. Size of input (generally called 'n') is the measurement of complexities. <br>
  <a href="https://www.geeksforgeeks.org/understanding-time-complexity-simple-examples/" target="_blank" rel="noreferrer noopener">GeeksforGeeks Explanation</a>
  <details>
		<summary>What is big-o notation?</summary>
		&emsp; When we are testing our algorithms, we generally use big-o notation, which means that it is the worst-case scenario (upper bound) of the algorithm. And within big-o notation, coefficients (2n -> n) and smaller terms (n^2+n -> n^2) are ignored, because when the input size gets bigger, coefficients and the smaller terms are dominated. (This is the simplest way I can explain, please search it on google for more)
  </details>
  <details>
		<summary>What is Time Complexity?</summary>
		&emsp; Time complexity is the amount of time spent throughout the algorithm. <br>
		&emsp; For example, if our task is to find the minimum element of an array, we simply look at every element, and compare it with the minimum that we found till that point. In the end, we looked at n elements, therefore time complexity of our algorithm is O(n).
  </details>
  <details>
		<summary>What is Space Complexity?</summary>
		&emsp; Space complexity is the maximum amount of space we allocated throughout our algorithm. For example, if we create a matrix with size nxn, space complexity of this algorithm is at least O(n^2).
  </details>
</details>

[Cycle Detection](Week2/Q1_Cycle_Detection.md) <br>
[Best time to buy stock](Week2/Q2_Best_Time_To_Buy_Stock.md) <br>
[Alien Alphabet](Week2/Q3_Alien_Alphabet.md)

### Week 3
To be added...


Here is some useful sources: <br>
Competitive Programmers Handbook (Detailed)<br>
Cracking the Coding Interview (Beginner Friendly) <br>
