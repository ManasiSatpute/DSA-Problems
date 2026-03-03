# 704. Binary Search

##  Overview

This repository contains a C++ implementation of the Binary Search algorithm to solve LeetCode Problem 704.

Binary Search is an efficient searching algorithm that works on **sorted arrays** by repeatedly dividing the search interval in half.

---

##  Approach

1. Initialize two pointers:

   * `left = 0`
   * `right = nums.size() - 1`
2. While `left <= right`:

   * Compute `mid` safely using:

     ```
     mid = left + (right - left) / 2
     ```
   * If `nums[mid] == target`, return `mid`
   * If `nums[mid] < target`, search right half
   * Otherwise, search left half
3. If not found, return `-1`

---

##  Complexity Analysis

* **Time Complexity:** O(log n)
* **Space Complexity:** O(1)

---

##  Key Implementation Detail

Using:

```
mid = left + (right - left) / 2
```

instead of:

```
mid = (left + right) / 2
```

prevents potential integer overflow.

---

##  Concepts Covered

* Divide and Conquer
* Logarithmic Time Complexity
* Pointer Manipulation
* Edge Case Handling

---

##  Conclusion
Binary search is essential for solving more advanced search-based problems such as:

* First/Last Occurrence
* Search in Rotated Sorted Array
* Lower Bound / Upper Bound
* Peak Element

This implementation provides a strong foundation for those advanced variations.
