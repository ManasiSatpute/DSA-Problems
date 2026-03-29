# 41. First Missing Positive

## Problem Statement

Given an unsorted integer array `nums`, return the **smallest positive integer** that is **not present in `nums`**.

You must implement an algorithm that runs in **O(n)** time and uses **O(1)** auxiliary space.

---

## Examples

### Example 1

Input:
```
nums = [1,2,0]
```

Output:
```
3
```

Explanation:  
The numbers in the range `[1,2]` are present in the array, so the smallest missing positive number is **3**.

---

### Example 2

Input:
```
nums = [3,4,-1,1]
```

Output:
```
2
```

Explanation:  
The number **1** exists in the array but **2** is missing, so the answer is **2**.

---

### Example 3

Input:
```
nums = [7,8,9,11,12]
```

Output:
```
1
```

Explanation:  
All numbers are greater than **1**, so the smallest missing positive number is **1**.

---

## Constraints

- `1 <= nums.length <= 10^5`
- `-2^31 <= nums[i] <= 2^31 - 1`
