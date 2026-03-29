# Problem: Maximum Depth of Binary Tree

## Problem Statement
Given the root of a **binary tree**, return its **maximum depth**.

The **maximum depth** of a binary tree is the number of nodes along the **longest path** from the root node down to the farthest leaf node.

---

## Inputs / Outputs

**Input:**  
- `root`: the root node of a binary tree.

**Output:**  
- An integer representing the **maximum depth** of the tree.

---

## Examples

**Example 1:**
Input: root = [3,9,20,null,null,15,7]
Output: 3


**Example 2:**
Input: root = [1,null,2]
Output: 2


---

## Constraints
- The number of nodes in the tree: `[0, 10^4]`  
- `-10^4 <= Node.val <= 10^4`

---

## Notes
- Edge case: an empty tree (`root = null`) has depth `0`.  
- Can be solved using **recursion (DFS)** or **iteration (BFS / level-order traversal)**.


