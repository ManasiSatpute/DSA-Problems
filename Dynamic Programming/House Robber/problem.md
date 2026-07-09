# House Robber (LeetCode 198)

## Problem

You are a professional robber planning to rob houses along a street. Each house contains a certain amount of money.

The only constraint is that **adjacent houses cannot be robbed on the same night**, because doing so will alert the police.

Given an integer array `nums`, where `nums[i]` represents the amount of money in the `i`th house, return the **maximum amount of money** you can rob without robbing two adjacent houses.

---

## Examples

### Example 1

**Input**

```text
nums = [1,2,3,1]
```

**Output**

```text
4
```

**Explanation**

* Rob house 1 (money = 1)
* Rob house 3 (money = 3)

Total money robbed = **4**

---

### Example 2

**Input**

```text
nums = [2,7,9,3,1]
```

**Output**

```text
12
```

**Explanation**

* Rob house 1 (money = 2)
* Rob house 3 (money = 9)
* Rob house 5 (money = 1)

Total money robbed = **12**

---

## Constraints

* `1 <= nums.length <= 100`
* `0 <= nums[i] <= 400`
