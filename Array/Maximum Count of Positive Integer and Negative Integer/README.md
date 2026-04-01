# Maximum Count of Positive and Negative Numbers

##  Problem Overview

Given an integer array `nums`, find the **maximum count** between positive and negative numbers.  

- Positive numbers: numbers > 0  
- Negative numbers: numbers < 0  
- Zeroes are ignored  

Return the larger count.

---

##  Approaches

###  Brute Force (Counting)

####  Idea
- Iterate through the array once  
- Maintain two counters: `positive` and `negative`  
- Increment `positive` for nums[i] > 0  
- Increment `negative` for nums[i] < 0  
- Ignore zeros  
- Return `max(positive, negative)`

####  Complexity
| Type | Complexity |
|------|-----------|
| Time | O(n) |
| Space | O(1) |

---

###  Binary Search (Optimized for Sorted Arrays)

####  Idea
If the array is **sorted**, we can use binary search:

- Find the first index of a positive number → `firstPositive`  
- Find the first index of a non-negative number → `firstZero`  
- Compute counts using indexes:
  - Negative count = firstZero  
  - Positive count = n - firstPositive  
- Return the maximum of the two

####  Complexity
| Type | Complexity |
|------|-----------|
| Time | O(log n) |
| Space | O(1) |

---

##  Summary

| Approach            | Time Complexity | Notes |
|--------------------|----------------|------|
| Brute Force         | O(n)           | Works for all arrays |
| Binary Search       | O(log n)       | Only works for sorted arrays |

