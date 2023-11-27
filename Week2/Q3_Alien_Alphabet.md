# Alien Alphabet

### Question:
An alien group has just landed to our world, and they are trying to communicate with us. It's your job as a research team to comprehend how they communicate. <br>
One of your group members has just realized that every alien speaks in their own language (no alien has ever spoken the same language with another alien, as far as we understand), and only the ones spoken with a specific alien for a considerable amount of time can start to understand that alien. <br>
There is one rule that all aliens follow in their languages and it is each word in their languages are sorted lexicopraphically (Please take a look at the examples). You are trying to find alphabet ordering of a specific aliens language, which you think might be their leaders. <br>
Return a list of characters representing the alien alphabet. If there can be more than one possible ordering, return in any possible order. <br>

Example: <br>
input: "send sgnl" <br>
By looking at the first word "send", we can say that 's' comes before 'e', 'e' comes before 'n', 'n' comes before 'd' <br>
By looking at the second word "sgnl", we can say that 's' comes before 'g', 'g' comes before 'n', 'n' comes before 'l' <br>
One possible alphabet can be [s, e, g, n, d, l] <br>
Other possible output: [s, g, e, n, l, d]

<details>
	<summary>Hint 1:</summary>
	Think of a directed graph. Every edge will show dependencies of a (node) character. Can there be any cycle?
</details>

<details>
	<summary>Hint 2:</summary>
	You can remove nodes from the graph one by one, and add them to the alphabet. Be careful when removing nodes!
</details>

<details>
	<summary>Hint 3:</summary>
	Before removing a node, you need to check if that node has any dependency or not. For efficieny, you can have a queue of nodes with no dependency remaining.
</details>


```c++
using namespace std;

bool detectCycle(vector<int>& nums){
	// write your code here

}
```

[Solution](S1_Cycle_Detection.cpp)

### Follow-up:
Your research group realized that some aliens has their own dialects which makes communication harder. This means that there might be some aliens talking with some invalid ordering of words. This makes their communication harder to understand for strangers, this introduces privacy and security to their communication. Only the close enough aliens can understand them directly. How would you approach to the same question after this information? <br> <br>

For example: <br>
text input: "abcde acdfgb" <br>
You can see that character 'b' in second word cannot be lexicographically ordered. Because of the ordering in first word. <br> <br>

If you want to discuss further, please get in contact with me :D