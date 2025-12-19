# Maximum Depth of Binary Tree

## Overview
This folder contains a solution to the **Maximum Depth of Binary Tree** problem.  
The task is to find the **maximum depth** of a binary tree, defined as the number of nodes along the longest path from the root to a leaf.

This problem demonstrates skills in:
- Binary tree traversal
- Recursion / Depth-First Search (DFS)
- Algorithm design and complexity analysis
- Edge-case handling and clean coding

---

## Approach

The solution uses **recursion** (DFS) to calculate the depth:

1. If the current node is `NULL`, return `0`.  
2. Recursively calculate the maximum depth of the **left** and **right** subtrees.  
3. Add `1` for the current node and return the maximum of the two subtree depths.

### Algorithm
```cpp
int maxDepth(TreeNode* root) {
    if (root == NULL) return 0;                 // Base case: empty tree
    return max(maxDepth(root->left),           // Max depth of left subtree
               maxDepth(root->right)) + 1;    // Max depth of right subtree + current node
}
