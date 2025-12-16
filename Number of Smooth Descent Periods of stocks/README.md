
## Overview
A smooth descent period is defined as a contiguous sequence of days where each day's stock price is **exactly 1 less** than the previous day's price. A single day also counts as a smooth descent period.
The code takes an array of integers representing daily stock prices and calculates the total number of smooth descent periods.


## Files
Problem.md– Contains the problem description, input/output examples, and constraints.  
Solution.cpp – Implements the solution using a single pass algorithm. It iterates over the array and keeps track of the current smooth descent streak, adding it to the total count.

## How the Code Works

1. Initialize `count` and `ans` to `1` (each day is a smooth descent by itself).
2. Loop through the price array from the second element:
   - If the current price is exactly 1 less than the previous price, increment `count`.
   - Otherwise, reset `count` to `1`.
   - Add `count` to `ans`.
3. Return `ans` as the total number of smooth descent periods.


## Example
cpp
Input: prices = [3,2,1,4]
Output: 7
Explanation: Smooth descent periods: [3], [2], [1], [4], [3,2], [2,1], [3,2,1]
