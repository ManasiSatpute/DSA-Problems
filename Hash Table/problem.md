# Hash Table Implementation Using Chaining (C++)

## 📌 Problem Statement

Design and implement a **Hash Table** in **C++** using the **Chaining technique** to handle collisions.  
The hash table should store **string keys** and **integer values**, support **dynamic resizing (rehashing)**, and provide efficient operations such as insertion, deletion, searching, and existence checking.

---

## 🎯 Objectives

- Understand how hash tables work internally
- Implement collision handling using **linked lists (chaining)**
- Implement **rehashing** when load factor exceeds a threshold
- Perform common hash table operations efficiently

---

## 🧠 Concept Overview

A **Hash Table** stores data in an array using a **hash function** to map keys to indices.  
When multiple keys map to the same index (collision), a **linked list** is used at that index.

### Key Concepts Used:
- Hash Function
- Collision Handling (Chaining)
- Load Factor
- Rehashing
- Linked Lists
- Dynamic Memory Allocation

---

## 🛠️ Hash Function Used

For a given string key:
index = ( Σ (ASCII(key[i]) × ASCII(key[i])) ) % table_size

This helps distribute keys uniformly across the table.

---

## 📊 Load Factor
Load Factor (λ) = currentSize / tableSize
- If **λ > 1**, rehashing is triggered
- Table size is doubled during rehashing

---
## 🧪 Sample Input (Used in `main()`)

```cpp
ht.insert("India", 150);
ht.insert("china", 150);
ht.insert("US", 130);
ht.insert("UK", 100);
ht.insert("Nepal", 10);
ht.insert("Canada", 20);
Population of China is :150
Idx 0 -> 
Idx 1 -> India ,150
Idx 2 -> US ,130
Idx 3 -> UK ,100
Idx 4 -> Canada ,20
Idx 5 ->





