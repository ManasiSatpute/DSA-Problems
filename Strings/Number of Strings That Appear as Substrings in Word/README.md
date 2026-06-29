# Number of Strings That Appear as Substrings in Word

## Approach

The idea is to check each string in the `patterns` array one by one. Instead of generating all possible substrings of `word`, we can directly use the built-in `find()` function provided by C++.

* Traverse every string in `patterns`.
* Use `word.find(patterns[i])` to check whether the current pattern exists in `word`.
* If `find()` does not return `string::npos`, the pattern is present as a substring.
* Increment the counter.
* Return the final count.

## Algorithm

1. Initialize `count = 0`.
2. Iterate through each string in `patterns`.
3. Check if `word.find(patterns[i]) != string::npos`.
4. If true, increment `count`.
5. Return `count`.


## Time Complexity

* `O(n × m)`

  * `n` = number of strings in `patterns`
  * `m` = length of `word`

## Space Complexity

* `O(1)`

