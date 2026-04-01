# Smallest Common Element in Two Sorted Arrays

##  Problem Statement

Given two **sorted arrays** of integers `nums1` and `nums2`, return the **smallest element** that is present in **both arrays**.  

- If no common element exists, return `-1`.

---

##  Examples

### Example 1:
Input:  
nums1 = [1, 3, 5, 7]  
nums2 = [3, 4, 5, 6]  

Output: 3  

Explanation:  
3 is the first (smallest) number present in both arrays.

---

### Example 2:
Input:  
nums1 = [2, 6, 8]  
nums2 = [1, 3, 5]  

Output: -1  

Explanation:  
No element is common in both arrays.

---

##  Constraints

- `1 <= nums1.length, nums2.length <= 10^5`  
- `-10^9 <= nums1[i], nums2[i] <= 10^9`  
- Both arrays are **sorted in strictly increasing order**.
