# Interleave the First and Second Half of a Queue

## Problem Statement

You are given a queue of integers containing an even number of elements.  
Your task is to interleave the first half of the queue with the second half, maintaining the original order within each half.

### Interleaving Definition

Interleaving means:
- Take one element from the first half
- Then take one element from the second half
- Repeat this process until all elements are rearranged

---

## Input

- A queue `q` containing `n` integers  
- `n` is guaranteed to be even

---

## Output

- Modify the given queue such that elements are interleaved
- Print the final queue order

---

## Example
### Input Queue
1 2 3 4 5 6 7 8 9 10


### Output Queue
1 6 2 7 3 8 4 9 5 10
