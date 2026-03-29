#  Find First and Last Position of Element in Sorted Array
##  Problem Summary

Given a sorted array `nums` (non-decreasing), find the **starting and ending position** of a given `target` value.

- Return `[-1, -1]` if the target is not found.
- Your solution must run in **O(log n)** time.

---

##  Approach Used in This Repository

###  Binary Search – Two Searches

**Idea:**

1. Use **binary search** to find the **first occurrence** of the target:
   - When `nums[mid] == target`, move **left** (`end = mid - 1`) to find earlier occurrences.
2. Use **binary search** to find the **last occurrence** of the target:
   - When `nums[mid] == target`, move **right** (`start = mid + 1`) to find later occurrences.
3. If the target is not found in either search, the result remains `-1` for that position.

---

##  Key Notes

- Two separate binary searches ensure **O(log n)** time complexity.
- The approach works efficiently even for very large arrays (`nums.length <= 10^5`).
- The resulting vector has the form `[first_occurrence, last_occurrence]`.

---

##  Complexity

- **Time:** O(log n)  (two binary searches)  
- **Space:** O(1)  (only storing the answer)


