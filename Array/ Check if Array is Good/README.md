# LeetCode 2784 - Check if Array is Good

## Problem Overview
We need to check whether the given array follows a specific pattern:
- Contains numbers from `1` to `n-1`
- All appear once except `n-1`, which appears twice

---

## Approach

### Step 1: Frequency Array
Create a frequency array of size `n` to count occurrences of each number.

### Step 2: Count Elements
Traverse the array and update frequency.

### Step 3: Validate Conditions
- Numbers `1` to `n-2` → must appear exactly once
- Number `n-1` → must appear exactly twice

---

## Complexity Analysis
- Time Complexity: **O(n)**
- Space Complexity: **O(n)**
