# Trie Data Structure Implementation

## Overview

This project implements a **Trie (Prefix Tree)** supporting multiple operations including:

- Insert words
- Search words
- Delete words
- Prefix-based search

A Trie is an efficient data structure used for storing and searching strings, especially when dealing with large datasets of words.

---

## Features

The implementation supports the following operations through a menu-driven program:

### Insert Word
Adds a word to the Trie.

### Search Word
Checks whether a word exists in the Trie.

### Delete Word
Removes a word from the Trie while maintaining the structure correctly.

### Prefix Search
Prints all words stored in the Trie that start with a given prefix.

---

## Data Structure Design

### Node Structure

Each node contains:

- A map storing child nodes for characters
- A boolean flag indicating whether the node represents the end of a word

```
unordered_map<char, Node*> children
bool endOfWord
```

This allows dynamic branching for characters.

---

## Algorithm Overview

### Insert Operation
Traverse each character of the word and create nodes if they do not exist.

### Search Operation
Traverse the Trie according to the characters of the word.

### Delete Operation
Deletion is performed recursively:
- Remove the end-of-word marker
- Delete nodes if they are no longer needed

### Prefix Search
1. Traverse the Trie until the prefix is found.
2. Perform DFS from that node to print all words.

---

## Time Complexity

| Operation | Complexity |
|----------|------------|
| Insert | O(L) |
| Search | O(L) |
| Delete | O(L) |
| Prefix Search | O(P + N) |

Where:

- **L** = length of the word  
- **P** = length of the prefix  
- **N** = number of words with that prefix  

---

## Space Complexity

```
O(ALPHABET_SIZE × N × L)
```

Where:

- **N** = number of words
- **L** = average word length

---

## Example Use Cases

- Autocomplete systems
- Dictionary lookup
- Word suggestion engines
- Search optimization
- Spell checking

---

## Conclusion

The Trie data structure provides efficient string storage and retrieval, especially when dealing with large collections of words. This implementation demonstrates core Trie operations along with prefix-based searching.
