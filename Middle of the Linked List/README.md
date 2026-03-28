# Middle of the Linked List

## Problem Description

Given the `head` of a singly linked list, return the **middle node** of the linked list.

- If there are **two middle nodes**, return the **second middle node**.
- The returned node should include all nodes following it in the linked list.

---

## Examples

### Example 1

**Input:**  
head = [1,2,3,4,5]
**Output:**  
[3,4,5]

**Explanation:**  
The middle node of the list is node `3`. Returning this node includes all nodes after it.

---

### Example 2

**Input:**  
head = [1,2,3,4,5,6]
**Output:**  
[4,5,6]

**Explanation:**  
Since there are two middle nodes (`3` and `4`), we return the **second middle node** which is `4`.

---

## Constraints

- The number of nodes in the linked list is in the range `[1, 100]`.
- `1 <= Node.val <= 100`

---

## Approach

There are two common approaches to solve this problem:

### 1. Using an Array (Extra Space)

1. Traverse the linked list and store **pointers to all nodes** in a vector or array.
2. Compute the **total number of nodes** `n`.
3. Return the node at index `n/2`, which automatically gives the **middle node** or the **second middle** if the count is even.

- **Time Complexity:** `O(n)`  
- **Space Complexity:** `O(n)`

### 2. Slow & Fast Pointer (Optimal)

1. Use two pointers:
   - `slow` moves **1 step at a time**
   - `fast` moves **2 steps at a time**
2. When `fast` reaches the end of the list, `slow` will be at the middle node.
3. Return `slow`.

- **Time Complexity:** `O(n)`  
- **Space Complexity:** `O(1)`  
