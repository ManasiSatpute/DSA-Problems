# Same Tree

## Overview
This folder contains a solution to the **Same Tree** problem.  
The task is to determine whether two binary trees are identical in structure and node values.

This problem demonstrates skills in:
- Binary tree traversal (DFS / recursion)
- Tree comparison algorithms
- Problem-solving and clean code
- Edge case handling

---

## Approach

The solution uses **recursive DFS**:

1. If both nodes are `null`, return `true`.  
2. If one node is `null` and the other is not, return `false`.  
3. If both nodes are not `null`, compare their values.  
4. Recursively check the left and right children of both trees.

### Algorithm (Recursive)
```cpp
bool isSameTree(TreeNode* p, TreeNode* q) {
    if (!p && !q) return true;      // Both null
    if (!p || !q) return false;     // One is null
    if (p->val != q->val) return false; // Values differ
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}
```
```Complexity Analysis
Time Complexity: O(N)
Each node is visited exactly once.

Space Complexity: O(H)
Recursion stack depends on the height H of the tree. Worst-case: H = N for skewed trees.
