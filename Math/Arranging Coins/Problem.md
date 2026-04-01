# Arranging Coins (LeetCode 441)

##  Problem Statement

You have `n` coins and you want to build a staircase with these coins.

The staircase consists of `k` rows where:
- The 1st row has 1 coin  
- The 2nd row has 2 coins  
- The 3rd row has 3 coins  
- and so on...

The last row may be incomplete.

Return the total number of **complete rows** you can build.

---

##  Examples

### Example 1:
Input:
n = 5

Output:
2

Explanation:
Row 1: 1 coin  
Row 2: 2 coins  
Row 3: requires 3 coins → not enough  
So total complete rows = 2

---

### Example 2:
Input:
n = 8

Output:
3

Explanation:
Row 1: 1  
Row 2: 2  
Row 3: 3  
Row 4: requires 4 coins → not enough  

Total complete rows = 3

---

##  Constraints

- `1 <= n <= 2^31 - 1`
