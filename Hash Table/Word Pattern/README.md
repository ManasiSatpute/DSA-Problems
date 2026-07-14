# Word Pattern (LeetCode 290)

## Overview

This problem checks whether a given pattern follows a one-to-one mapping with the words in a string.

The main challenge is ensuring that:

- Every pattern character maps to exactly one word.
- Every word maps back to exactly one pattern character.

---

## Initial Thought Process

My first approach was to use a single `unordered_map<char, string>` to map each character in the pattern to its corresponding word.

Example:

```text
Pattern : a b b a
Words   : dog cat cat dog

a -> dog
b -> cat
```

This correctly verifies that the same character always maps to the same word.

---

## Mistake I Made

Initially, I assumed that checking only:

```
character -> word
```

was sufficient.

However, this fails for cases like:

```text
Pattern : ab
Words   : dog dog
```

Using only one map:

```text
a -> dog
b -> dog
```

The solution incorrectly returns `true`, although the expected answer is `false`.

The missing condition was ensuring that **two different characters cannot map to the same word**.

---

## Final Approach

To maintain a one-to-one mapping, I used two hash maps:

### 1. Character → Word

```cpp
unordered_map<char, string>
```

Ensures that a character always maps to the same word.

### 2. Word → Character

```cpp
unordered_map<string, char>
```

Ensures that a word is not assigned to multiple characters.

Before inserting a new mapping:

- Check whether the character already has a mapped word.
- Check whether the word has already been assigned to another character.
- If either condition fails, return `false`.

---

## Algorithm

1. Split the input string into individual words.
2. Compare the number of words with the pattern length.
3. Traverse both simultaneously.
4. If the character already exists, verify the mapped word.
5. Otherwise, ensure the word is not already mapped.
6. Insert both mappings.
7. If no conflicts occur, return `true`.

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(n)`

where `n` is the number of words in the string.

---

## Key Learnings

- A single hash map is not always sufficient for enforcing a one-to-one relationship.
- Bidirectional mapping is a common technique used in mapping problems.
- `unordered_map::find()` is useful for checking whether a key already exists without creating a new entry.
- Carefully analyzing edge cases often reveals missing constraints in the initial approach.

