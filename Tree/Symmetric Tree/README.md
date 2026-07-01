# Symmetric Tree

## Problem

Given the root of a binary tree, determine whether it is symmetric around its center.

---

## Intuition

A symmetric tree is a mirror image about its center.

To verify symmetry, compare:

- Left subtree's left child with right subtree's right child.
- Left subtree's right child with right subtree's left child.

If every corresponding pair matches, the tree is symmetric.

---

## Approach

I used recursion to compare two subtrees.

A helper function `isMirror(node1, node2)` checks whether two nodes are mirror images.

### Base Cases

- If both nodes are `NULL`, return `true`.
- If one node is `NULL`, return `false`.
- If the values are different, return `false`.

Otherwise, recursively compare:

- `node1->left` with `node2->right`
- `node1->right` with `node2->left`

Both recursive calls must return `true`.

---

## Algorithm

1. If the root is `NULL`, return `true`.
2. Compare the left and right subtrees using a helper function.
3. Handle the base cases.
4. Compare the node values.
5. Recursively compare mirror children.
6. Return the result.

---

## Dry Run

Input:

```text
        1
      /   \
     2     2
    / \   / \
   3   4 4   3
```

Recursive calls:

```text
isMirror(2,2)

├── isMirror(3,3)
│     ├── isMirror(NULL,NULL)
│     └── isMirror(NULL,NULL)
│
└── isMirror(4,4)
      ├── isMirror(NULL,NULL)
      └── isMirror(NULL,NULL)
```

Since all recursive calls return `true`, the tree is symmetric.

---

## Complexity Analysis

**Time Complexity:** `O(N)`

Each node is visited once.

**Space Complexity:** `O(H)`

where `H` is the height of the tree due to recursion.

- Balanced Tree: `O(log N)`
- Skewed Tree: `O(N)`

---

## What I Learned

- How mirror recursion works in binary trees.
- Importance of checking `NULL` before accessing node values.
- Difference between comparing pointers and comparing node values.
- How recursive calls solve the problem on smaller subtrees.
