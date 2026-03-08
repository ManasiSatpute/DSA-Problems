# Trie Operations Implementation (Insert, Search, Delete, Prefix Search)

## Problem Statement

Implement a **Trie (Prefix Tree)** data structure that supports the following operations efficiently:

1. **Insert a word** into the Trie.
2. **Search a word** in the Trie.
3. **Delete a word** from the Trie.
4. **Prefix search** – print all words in the Trie that start with a given prefix.

A Trie is a tree-like data structure commonly used for storing and retrieving strings, especially useful in applications such as **autocomplete, spell checking, and dictionary implementations**.

---

## Operations

### 1. Insert
Insert a word into the Trie character by character.  
If a node for a character does not exist, create it.

### 2. Search
Check if a word exists in the Trie by traversing through its characters.

### 3. Delete
Remove a word from the Trie. Nodes should be deleted only if they are not shared with other words.

### 4. Prefix Search
Given a prefix, print all stored words that start with that prefix.

---

## Example Interaction

Menu
1. Insert word  
2. Search word  
3. Delete word  
4. Prefix search  
5. Exit  

Example:

Input:
Insert → apple, app, bat

Search:
app → found

Prefix search:
ap → apple, app

Delete:
app

Search:
app → not found

---

## Constraints

- Words consist of lowercase English letters.
- Number of stored words can be large, so efficient operations are required.

---

## Applications of Trie

- Autocomplete systems
- Spell checkers
- IP routing (Longest prefix matching)
- Dictionary implementations
- Search engines
