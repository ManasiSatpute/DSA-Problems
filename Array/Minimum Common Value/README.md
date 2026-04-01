# Smallest Common Element in Two Sorted Arrays

##  Problem Overview

Given two sorted arrays `nums1` and `nums2`, find the **smallest element** that appears in **both arrays**.  

Return `-1` if no common element exists.

---

##  Approaches

---

###  Two-Pointer Approach (Optimal)

####  Idea
- Initialize two pointers `i = 0` for `nums1` and `j = 0` for `nums2`.  
- Compare `nums1[i]` and `nums2[j]`:
  - If equal → return the element (smallest common)
  - If `nums1[i] < nums2[j]` → increment `i`
  - If `nums1[i] > nums2[j]` → increment `j`  
- Stop when any pointer reaches the end  

####  Complexity
| Type | Complexity |
|------|------------|
| Time | O(n + m) |
| Space | O(1) |

---

###  Binary Search Approach (Alternative)

#### Idea
- Iterate over elements of the smaller array  
- For each element, perform **binary search** in the larger array  
- Return the first match  

####  Complexity
| Type | Complexity |
|------|------------|
| Time | O(n log m) |
| Space | O(1) |

> n = size of smaller array, m = size of larger array

---

##  Summary

| Approach       | Time Complexity | Notes |
|----------------|----------------|------|
| Two-Pointer    | O(n + m)       | Efficient, preferred for sorted arrays |
| Binary Search  | O(n log m)     | Useful if one array is much smaller |


