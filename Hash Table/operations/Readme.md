---

##  How It Works

- A hash function converts a string key into an array index
- Collisions are handled using **linked list chaining**
- When load factor exceeds 1, table size is doubled and elements are rehashed

---

##  Supported Operations

###  Insert
Adds a new key-value pair to the hash table.

###  Search
Returns the value associated with a key.

###  Remove
Deletes a key-value pair from the table.

###  Exist
Checks if a key is present.

###  Print
Displays the entire hash table index-wise.

---

##  Example Usage

```cpp
HashTable ht(6);
ht.insert("India", 150);
ht.insert("china", 150);

if(ht.exist("china")) {
    cout << "Population of China is :" << ht.search("china") << endl;
}

ht.remove("china");
ht.print();
```
 Time & Space Complexity
```
Operation          Time Complexity
Insert             O(1) average
Search             O(1) average
Delete             O(1) average




