# LeetCode 3 - Longest Substring Without Repeating Characters

## Approach

This problem is solved using the **Sliding Window** technique.

Two pointers (`l` and `r`) are used to represent the current window. A frequency array keeps track of the characters present in the window.

- Expand the window by moving the right pointer.
- Increase the frequency of the current character.
- If a duplicate character is found, shrink the window from the left until the window becomes valid again.
- Update the maximum window length after every valid window.

---

## Algorithm

1. Initialize two pointers `l` and `r`.
2. Create a frequency array of size 256 initialized with 0.
3. Traverse the string using the right pointer.
4. Increment the frequency of the current character.
5. While the current character appears more than once:
   - Decrement the frequency of the left character.
   - Move the left pointer forward.
6. Update the maximum length using `r - l + 1`.
7. Return the maximum length.

---

## Time Complexity

- **O(n)**

Each character enters and leaves the sliding window at most once.

---

## Space Complexity

- **O(1)**

A fixed-size frequency array of 256 characters is used.


