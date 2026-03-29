# Delete Leaves With a Given Value

## Problem Statement

Given the root of a binary tree and an integer `target`, delete all the leaf nodes with value `target`.

Note:
- Once a leaf node with value `target` is deleted, its parent node may become a leaf.
- If that parent node also has value `target`, it should be deleted as well.
- This process continues until no more such leaf nodes exist.

## Examples

### Example 1
**Input:**  
root = [1,2,3,2,null,2,4], target = 2  

**Output:**  
[1,null,3,null,4]

**Explanation:**  
Leaf nodes with value `2` are removed first.  
After removal, new leaf nodes with value `2` are formed and removed recursively.

---

### Example 2
**Input:**  
root = [1,3,3,3,2], target = 3  

**Output:**  
[1,3,null,null,2]

---

### Example 3
**Input:**  
root = [1,2,null,2,null,2], target = 2  

**Output:**  
[1]
