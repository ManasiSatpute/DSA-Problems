# Delete Leaves With a Given Value – Solution Explanation

## Approach

The problem is solved using **postorder traversal (DFS)**.

Postorder traversal ensures that child nodes are processed before the parent, which is necessary because:
- A parent node can only be removed after its children are processed.
- Removing leaf nodes may cause new leaf nodes to form.

The function recursively removes leaf nodes equal to `target` and returns the updated subtree root.

---

## Algorithm

1. If the current node is `NULL`, return `NULL`.
2. Recursively process the left and right subtrees.
3. After recursion:
   - If both left and right children are `NULL` **and**
   - The current node's value equals `target`,
   - Delete the current node by returning `NULL`.
4. Otherwise, update the node’s left and right pointers.
5. Return the current node.

---

## Time Complexity

- **O(n)**  
Each node is visited exactly once.

---

## Space Complexity

- **O(h)**  
Where `h` is the height of the tree due to recursion stack.
- Balanced tree: O(log n)
- Skewed tree: O(n)

---

## Key Insight

Using postorder traversal is essential because decisions about deleting a node depend on the final state of its children after recursive processing.
