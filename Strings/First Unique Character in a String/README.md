# First Unique Character in a String (LeetCode 387)

## Problem Description
Given a string `s` consisting of lowercase English letters, find the index of the first non-repeating character in the string.

- If such a character exists, return its index  
- Otherwise, return `-1`

---

## Approach: Two-Pass Frequency Counting

This solution uses a **two-pass frequency counting approach**, which is the most efficient and recommended method for this problem.

### Idea
1. Count the frequency of each character in the string  
2. Traverse the string again to find the first character whose frequency is exactly `1`  

---

## Step-by-Step Explanation

### Step 1: Frequency Count
- Use an integer array of size `26` to store the frequency of each lowercase character  
- Traverse the string once and update the frequency array  

### Step 2: Find First Unique Character
- Traverse the string again from left to right  
- The first character whose frequency is `1` is the answer  
- Return its index immediately  

### Step 3: No Unique Character
- If no character with frequency `1` is found, return `-1`  

---

## Complexity Analysis

- **Time Complexity:** `O(n)`  
  - First pass to count frequencies  
  - Second pass to find the unique character  

- **Space Complexity:** `O(1)`  
  - Fixed size array of 26 characters  

---
