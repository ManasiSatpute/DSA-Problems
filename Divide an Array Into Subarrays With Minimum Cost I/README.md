#  Divide an Array Into Subarrays With Minimum Cost I (LeetCode 3010)

##  Overview

This repository contains a concise and efficient solution to **LeetCode 3010 – Divide an Array Into Subarrays With Minimum Cost I**.

The task is to split the array into **3 contiguous subarrays** such that the **sum of the first elements** of each subarray is minimized.

---

##  Insight

* The first subarray must start at index `0`, so its cost is fixed: `nums[0]`
* The remaining two subarrays must start somewhere after index `0`
* To minimize total cost, we should pick the **two smallest values** from the remaining elements

This greedy observation leads to an optimal and simple solution.

---

##  Algorithm Steps

1. Store the first element of the array
2. Traverse the rest of the array
3. Track the **two minimum values** encountered
4. Return the sum of the first element and the two minimum values

---

##  Complexity Analysis

* **Time Complexity:** `O(n)`
* **Space Complexity:** `O(1)`

---

##  Project Structure

```
.
├── problem.md     # Problem statement and examples
├── solution.cpp   # C++ implementation
└── README.md      # Explanation and approach
```

---

##  Key Takeaway

> Since only the starting elements matter, choosing the smallest possible starting points minimizes the total cost.

---

🔗 **LeetCode Link:** [https://leetcode.com/problems/divide-an-array-into-subarrays-with-minimum-cost-i/](https://leetcode.com/problems/divide-an-array-into-subarrays-with-minimum-cost-i/)

Happy Coding! 💻✨
