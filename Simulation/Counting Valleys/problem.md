# Counting Valleys

## Problem Statement

An avid hiker keeps meticulous records of their hikes. During a hike that consists of exactly `steps` steps, each step is recorded as either an **uphill (`U`)** or **downhill (`D`)** step.

The hike always starts and ends at **sea level**, and each step changes the altitude by exactly one unit.

A **mountain** is a sequence of consecutive steps above sea level, starting with a step up from sea level and ending with a step down to sea level.

A **valley** is a sequence of consecutive steps below sea level, starting with a step down from sea level and ending with a step up to sea level.

Given the sequence of steps taken during the hike, determine the number of **valleys** traversed.

## Example

For the path:

`UDDDUDUU`

The hiker first enters a valley below sea level, climbs back to sea level, then climbs a mountain, and finally returns to sea level.

Therefore, the number of valleys traversed is:

`1`

## Function Description

Complete the `countingValleys` function.

### Parameters

- `int steps` — the number of steps in the hike.
- `string path` — a string containing `U` and `D`, representing uphill and downhill steps.

### Returns

- `int` — the number of valleys traversed.

## Input Format

The first line contains an integer `steps`, representing the number of steps in the hike.

The second line contains a string `path` consisting of `steps` characters describing the hike.

## Constraints

- `2 ≤ steps ≤ 10^6`
- `path` contains only the characters `U` and `D`.
- The hike starts and ends at sea level.

## Sample Input

```text
8
UDDDUDUU
```
## Sample Output
```text
1
