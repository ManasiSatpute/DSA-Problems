# N-ary Tree Preorder Traversal

## Overview
This folder contains a solution to the **N-ary Tree Preorder Traversal** problem.  
The task is to traverse an n-ary tree in **preorder** and return the values of its nodes in order.

This problem demonstrates skills in:
- Tree traversal algorithms (preorder)
- Recursion
- Handling hierarchical data structures
- Clean, maintainable code

---

## Approach

The solution uses **Depth-First Search (DFS)** recursion to perform the preorder traversal:

1. **Visit the root node** and add its value to the result list.  
2. **Recursively visit each child** of the current node from left to right.  
3. Return the final result list after all nodes are visited.

```Complexity Analysis
Time Complexity: O(N)
Each node is visited exactly once.
```
### Algorithm (Recursive)
```cpp
void dfs(Node* root) {
    if (root == nullptr)
        return;

    result.push_back(root->val);   // Visit root

    for (Node* child : root->children)
        dfs(child);                 // Visit children recursively
}



