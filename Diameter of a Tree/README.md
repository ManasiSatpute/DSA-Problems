# Diameter of Binary Tree (C++)

##  Problem Statement

Given the root of a binary tree, return the **length of the diameter** of the tree.

The **diameter** of a binary tree is the **length of the longest path between any two nodes** in the tree.  
This path may or may not pass through the root.

The length of a path between two nodes is measured by the **number of edges** between them.

---

##  Approach (Optimized O(n))

This solution computes the **diameter and height together** using recursion to ensure each node is visited only once.

### Key Idea

For every node:
- Height = `max(leftHeight, rightHeight) + 1`
- Diameter through that node = `leftHeight + rightHeight`

The overall diameter is the **maximum** of:
- Diameter of left subtree
- Diameter of right subtree
- Diameter passing through the current node

To achieve this efficiently, a `pair<int, int>` is returned from each recursive call:

