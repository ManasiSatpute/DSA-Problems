# 328. Odd Even Linked List

## Problem Statement

Given the head of a singly linked list, group all nodes positioned at **odd indices** together, followed by the nodes at **even indices**, and return the reordered list.

* The **first node** is considered **odd**, the second **even**, and so on.
* The **relative order** within the odd group and even group must remain the same as in the original list.

You must solve the problem using:

* **O(n)** time complexity
* **O(1)** extra space complexity

---

## Examples

### Example 1

**Input:**

```
head = [1,2,3,4,5]
```

**Output:**

```
[1,3,5,2,4]
```

---

### Example 2

**Input:**

```
head = [2,1,3,5,6,4,7]
```

**Output:**

```
[2,3,6,7,1,5,4]
```

---

## Constraints

* Number of nodes in the linked list is in the range `[0, 10^4]`
* `-10^6 <= Node.val <= 10^6`

---

## Goal

Rearrange the linked list by grouping nodes at odd indices first, then even indices, **without creating new nodes or using extra space**.
