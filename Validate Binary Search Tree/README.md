# Validate Binary Search Tree – Solution Explanation

## Approach

The solution uses **inorder traversal** of the binary tree.

In a valid Binary Search Tree, an inorder traversal produces values in **strictly increasing order**.  
We keep track of the previously visited node and compare it with the current node:

- If the current node's value is less than or equal to the previous node's value, the tree is not a valid BST.
- Otherwise, continue the traversal.

A pointer `prev` is used to store the previously visited node during traversal.

---

## Algorithm

1. Initialize a pointer `prev` as `nullptr`.
2. Recursively validate the left subtree.
3. Compare the current node’s value with `prev`:
   - If `prev` is not null and `current->val <= prev->val`, return `false`.
4. Update `prev` to the current node.
5. Recursively validate the right subtree.
6. If all checks pass, return `true`.

---

## Time Complexity

- **O(n)**  
Each node is visited exactly once during the inorder traversal.

---

## Space Complexity

- **O(h)**  
Where `h` is the height of the tree, due to recursion stack usage.
  - Best case (balanced tree): O(log n)
  - Worst case (skewed tree): O(n)

---

## Key Insight

Using inorder traversal is an efficient way to validate a BST because it naturally enforces the strict ordering property required by BSTs.
