# Counting Valleys

## Problem

Given a hiker's path represented by `U` (uphill) and `D` (downhill), count the number of valleys traversed.

The hiker starts and ends at sea level (`0`), and every step changes the altitude by one unit.

A valley is completed when the hiker goes below sea level and then returns to sea level.

---

## Approach
We maintain a variable called `level` to represent the hiker's current altitude.

### Step 1: Initialize

Start with:

- `level = 0`
- `count = 0`

The hiker starts at sea level.

### Step 2: Process each step

Traverse the path from left to right.

- For an `U` step, increase the level by `1`.
- For a `D` step, decrease the level by `1`.

### Step 3: Detect a valley

A valley is completed when the hiker returns to sea level after being below it.

Therefore, whenever an `U` step makes the current `level` equal to `0`, increment the valley count.

For example:

`0 → -1 → -2 → -1 → 0`

The transition back to `0` completes one valley.

### Why this works

The `level` variable continuously represents the hiker's position relative to sea level.

- `level > 0` → above sea level
- `level = 0` → sea level
- `level < 0` → below sea level

Because a valley must be below sea level and must end when the hiker returns to sea level, checking for a return to `0` after an uphill step correctly identifies each valley.

---

## Complexity Analysis

### Time Complexity

**O(n)**

Each step in the path is processed exactly once, where `n` is the number of steps.

### Space Complexity

**O(1)**

Only a few variables are used regardless of the size of the input.
