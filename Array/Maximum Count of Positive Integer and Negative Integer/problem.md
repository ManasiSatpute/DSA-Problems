# Maximum Count of Positive and Negative Numbers

##  Problem Statement

Given an integer array `nums`, return the **maximum count** between positive and negative numbers in the array.

- Positive numbers are numbers greater than 0.
- Negative numbers are numbers less than 0.
- Zeroes are ignored.

---

##  Examples

### Example 1:
Input: nums = [-2, -1, 0, 1, 2, 3]  
Output: 3  

Explanation:  
- Negative numbers: -2, -1 → count = 2  
- Positive numbers: 1, 2, 3 → count = 3  
- Maximum count = 3

---

### Example 2:
Input: nums = [5, 20, 66, 1314]  
Output: 4  

Explanation:  
- All numbers are positive → count = 4  
- Maximum count = 4

---

### Example 3:
Input: nums = [-3, -2, -1, 0, 0, 0]  
Output: 3  

Explanation:  
- Negative numbers: -3, -2, -1 → count = 3  
- Positive numbers: none → count = 0  
- Maximum count = 3

---

##  Constraints

- `1 <= nums.length <= 2000`  
- `-2000 <= nums[i] <= 2000`  

