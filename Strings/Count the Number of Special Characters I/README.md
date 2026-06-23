# LeetCode 3120 - Count the Number of Special Characters I

## Problem Overview
We are given a string and need to count how many characters appear in both:
- lowercase form
- uppercase form

---

## Approach

### Step 1: Track frequency
Use two arrays:
- `lower[26]` → tracks lowercase letters
- `upper[26]` → tracks uppercase letters

### Step 2: Mark occurrences
Traverse string and update arrays accordingly.

### Step 3: Count special characters
A character is special if:
- `lower[i] == 1` AND `upper[i] == 1`

---

## Complexity Analysis
- Time Complexity: **O(n)**
- Space Complexity: **O(1)** (fixed size arrays)

