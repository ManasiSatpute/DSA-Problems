# 2446. Determine if Two Events Have Conflict



## Approach

The given event times are in `"HH:MM"` format, so comparing them directly is inconvenient. The first step is to convert each time into the total number of minutes elapsed since `00:00`.

For a time `"HH:MM"`:

```
totalMinutes = hours × 60 + minutes
```

After conversion, each event is represented as:

- Event 1 → `[start1, end1]`
- Event 2 → `[start2, end2]`

### Key Observation

Two events **do not overlap** only if one of the following conditions is true:

1. Event 1 ends before Event 2 starts.

```
end1 < start2
```

2. Event 2 ends before Event 1 starts.

```
end2 < start1
```

If neither condition is true, then the events share at least one common moment, so they conflict.

Since the problem states that both the **start** and **end** times are inclusive, events touching at exactly one time (e.g., one ends at `02:00` and the other starts at `02:00`) are also considered conflicting.

---

## Algorithm

1. Convert the start and end times of both events into total minutes.
2. Check whether:
   - `end1 < start2`, or
   - `end2 < start1`.
3. If either condition is true, return `false`.
4. Otherwise, return `true`.

---

## Dry Run

### Input

```text
event1 = ["01:15","02:00"]
event2 = ["02:00","03:00"]
```

### Convert to Minutes

```
event1Start = 75
event1End   = 120

event2Start = 120
event2End   = 180
```

### Check

```
120 < 120 ?  No
180 < 75  ?  No
```

Neither condition is true, so the events overlap.

**Output**

```
true
```

---

## Complexity Analysis

- **Time Complexity:** `O(1)`
- **Space Complexity:** `O(1)`
