# Infinite Chessboard

### Question:
On an infinite chessboard, a knight starts at the origin. You are given the coordinates (x, y) of a pawn. Determine the minimum number of steps the knight needs to take to capture the pawn. (If you do not know how knight moves on a chessboard, please search for it)

```c++
using namespace std;

int shortestPathLength(int x, int y){
	// write your code here

}
```

<details>
	<summary>Hint 1</summary>
	&emsp; Although representing an infinite chessboard as a physical graph is impractical, you can conceptualize it as a graph to facilitate the algorithm. The idea is to transform the peculiar movements of the knight into a consecutive series of nodes, allowing for traversal using linear search algorithms or similar approaches.
</details>

<details>
	<summary>Hint 2</summary>
	&emsp; You can traverse this conceptual graph using a search algorithm such as BFS or DFS, but using one of these is impractical in an INFINITE board.
</details>

[Solution](S2_Infinite_Chessboard_1.md) (To be added...)

### Follow-up:
On top of opponent pawn's location, you are given a list of locations where friendly pieces are located. Your knight cannot move through the squares occupied by friendly pieces. Friendly pieces cannot move or do anything else They just occupy some places. When there is no possible solution, return -1.

```c++
using namespace std;

int shortestPathLength(int x, int y, vector<pair<int,int>>& forbidden_cells){
	// write your code here

}
```

<details>
	<summary>Hint 1</summary>
	&emsp; Your BFS algorithm should work fine, the only difference is you can't move on to some predetermined cells. The main problem is how to figure out when you can't reach to the target cell. Do not forget that the chessboard is infinite.
</details>

<details>
	<summary>Hint 2</summary>
	&emsp; If there is no such solution, either your knight is surrounded by forbidden cells, or the pawn you want to eliminate is surrounded by forbidden cells. Your algorithm can probably detect when knight is surrounded by forbidden cells.
</details>

<details>
	<summary>Hint 3</summary>
	&emsp; Think about how your algorithm can detect if pawn is surrounded by forbidden cells. What if you start from the pawn and try to find knight. If your algorithm gets stuck, you can understand that pawn is surrounded and there is no other cell that you can traverse.
</details>

[Solution](S2_Infinite_Chessboard_2.md) (To be added...)
