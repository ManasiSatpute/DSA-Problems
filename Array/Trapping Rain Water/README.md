# Trapping Rain Water

## Approach

To determine how much water can be trapped at a particular index, we need:

* The tallest bar on its left.
* The tallest bar on its right.

The water trapped at index `i` is:

```text
min(leftMax[i], rightMax[i]) - height[i]
```

If this value is positive, water can be stored at that position.

To efficiently compute these values:

1. Create a `leftMax` array storing the maximum height seen from the left.
2. Create a `rightMax` array storing the maximum height seen from the right.
3. For each index, calculate the trapped water and add it to the answer.

---

## Algorithm

1. Create a `leftMax` array.
2. Traverse from left to right and store the maximum height seen so far.
3. Create a `rightMax` array.
4. Traverse from right to left and store the maximum height seen so far.
5. For each index:

   * Compute `min(leftMax[i], rightMax[i]) - height[i]`.
   * If positive, add it to the total trapped water.
6. Return the total trapped water.

---

## Complexity Analysis

| Metric           | Complexity |
| ---------------- | ---------- |
| Time Complexity  | O(n)       |
| Space Complexity | O(n)       |

