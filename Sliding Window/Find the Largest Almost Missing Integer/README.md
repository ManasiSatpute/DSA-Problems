# 3471. Find the Largest Almost Missing Integer


## Idea

An integer is *almost missing* if it shows up in **exactly one** contiguous
subarray of length `k`. Note that "appears in a subarray" is a yes/no fact
about that window — if the value shows up more than once inside the same
window, it still only counts as **one** appearance for that window.

So the approach is:

1. Slide a window of size `k` across `nums` (there are `n - k + 1` such
   windows).
2. For each window, collect its **distinct** values into a set (this avoids
   double-counting a value that repeats inside the same window).
3. For every distinct value in that window, bump a global counter
   `count[value]++`. This counter therefore tracks *how many windows a value
   appears in*, not how many times it appears in total.
4. After processing all windows, look for values with `count[value] == 1`
   and return the largest one. If none exist, return `-1`.

## Why the per-window `unordered_set` is needed

Without deduping inside the window, a value that repeats twice in the same
window (e.g. `[7, 2, 7]`) would get `count[7] += 2` for that single window,
incorrectly making it look like it appeared in two different windows.

## Complexity

- **Time:** `O((n - k + 1) * k)`, i.e. `O(n * k)` in the worst case, since
  each of the `~n` windows does `O(k)` work to build its set.
- **Space:** `O(n)` for the `count` map (at most `n` distinct values) plus
  `O(k)` for the temporary per-window set.

Given the constraints (`n <= 50`), this brute-force approach comfortably
fits within limits.

## Example walkthrough

```
nums = [3, 9, 2, 1, 7], k = 3

Windows: [3,9,2], [9,2,1], [2,1,7]

count: 3->1, 9->2, 2->3, 1->2, 7->1

Values with count == 1: 3, 7
Largest -> 7
```




## Complexity Summary

| Metric | Complexity |
|---|---|
| Time  | `O(n * k)` |
| Space | `O(n)` |

## Tags

`Array` `Hash Table` `Sliding Window`
