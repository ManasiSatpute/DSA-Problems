# 2446. Determine if Two Events Have Conflict

## Problem Statement

You are given two arrays of strings `event1` and `event2`, where:

- `event1 = [startTime1, endTime1]`
- `event2 = [startTime2, endTime2]`

Each event starts at `startTime` and ends at `endTime`.

The time is represented in the 24-hour format `"HH:MM"`.

Two events are said to have a **conflict** if they share **at least one common moment**. Return `true` if the two events conflict; otherwise, return `false`.

**Note:** The start and end times are **inclusive**.

---

## Examples

### Example 1

**Input**
```text
event1 = ["01:15","02:00"]
event2 = ["02:00","03:00"]
```

**Output**
```text
true
```

**Explanation**

Both events occur at **02:00**, so they conflict.

---

### Example 2

**Input**
```text
event1 = ["01:00","02:00"]
event2 = ["01:20","03:00"]
```

**Output**
```text
true
```

---

### Example 3

**Input**
```text
event1 = ["10:00","11:00"]
event2 = ["14:00","15:00"]
```

**Output**
```text
false
```

---

## Constraints

- `event1.length == event2.length == 2`
- Time format is always `"HH:MM"`
- All given times are valid.
- `startTime <= endTime`
