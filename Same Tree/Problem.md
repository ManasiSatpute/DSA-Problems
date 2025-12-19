# Problem: Same Tree

## Problem Statement
Given the roots of two binary trees, `p` and `q`, determine if the two trees are **the same**.

Two binary trees are considered the same if:
1. They are **structurally identical**.
2. Each corresponding node has the **same value**.

---

## Inputs / Outputs

**Input:**  
- `p` and `q`: roots of two binary trees.

**Output:**  
- Boolean value: `true` if the trees are the same, `false` otherwise.

---

## Examples

**Example 1:**
Input: p = [1,2,3], q = [1,2,3]
Output: true

**Example 2:**
Input: p = [1,2], q = [1,null,2]
Output: false


---

## Constraints
- The number of nodes in both trees is in the range `[0, 100]`.  
- `-10^4 <= Node.val <= 10^4`

---

## Notes
- Consider edge cases such as empty trees (`p = null` or `q = null`).  
- Focus on **recursive traversal** to check both structure and values simultaneously.


