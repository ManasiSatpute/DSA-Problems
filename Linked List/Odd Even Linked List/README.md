#  Odd Even Linked List (LeetCode 328)

##  Overview

This repository contains an efficient **in-place** solution for **LeetCode 328 – Odd Even Linked List**.

The task is to reorder a singly linked list by grouping nodes at **odd positions first**, followed by nodes at **even positions**, while preserving their relative order.

---

##  Key Idea

Instead of creating a new list:

* Maintain two pointers: one for **odd nodes** and one for **even nodes**
* Rearrange the `next` pointers directly
* Finally, connect the odd list to the even list

This approach satisfies both **O(n) time** and **O(1) space** constraints.

---

##  Algorithm Steps

1. If the list has fewer than 2 nodes, return it as-is
2. Initialize:

   * `odd` pointer at head
   * `even` pointer at `head->next`
   * Store `evenHead` for later connection
3. Iterate while even and even->next exist:

   * Link odd nodes together
   * Link even nodes together
4. Attach the even list after the odd list
5. Return the modified head

---

##  Complexity Analysis

* **Time Complexity:** `O(n)`
* **Space Complexity:** `O(1)`

---

##  Project Structure

```
.
├── problem.md     # Problem statement & examples
├── solution.cpp   # C++ implementation
└── README.md      # Explanation & approach
```

---

##  Key Takeaway

> Smart pointer manipulation allows linked list reordering without extra memory.

---

🔗 **LeetCode Link:** [https://leetcode.com/problems/odd-even-linked-list/](https://leetcode.com/problems/odd-even-linked-list/)

Happy Coding! 💻✨
