# Find Duplicate Subtrees – Solution Explanation

## Approach

The solution uses **tree serialization with DFS (postorder traversal)** to detect duplicate subtrees.

Each subtree is converted into a unique string representation that includes:
- The current node value
- Serialization of the left subtree
- Serialization of the right subtree

An unordered map is used to store the frequency of each serialized subtree.  
If a subtree serialization appears **more than once**, it is considered a duplicate.

When a serialization count becomes exactly `2`, the corresponding subtree root is added to the result to avoid duplicates in the output.

---

## Algorithm

1. Perform a recursive DFS traversal of the tree.
2. For each node:
   - Serialize the subtree as:  
     `root->val + "," + left_serialization + "," + right_serialization`
3. Store the serialization in a hash map and increment its count.
4. If the count becomes `2`, add the current node to the result list.
5. Return the serialization to the parent call.
6. After traversal, return the list of duplicate subtree roots.

---

## Time Complexity

- **O(n × k)**  
  - `n` is the number of nodes.
  - `k` is the average length of the serialization string.
  - Each node is visited once, but string concatenation adds extra cost.

---

## Space Complexity

- **O(n × k)**  
  - Hash map stores serialized subtrees.
  - Recursion stack can go up to the height of the tree.

---

## Key Insight

Serializing subtrees allows us to uniquely identify both **structure** and **node values**.  
Tracking frequencies ensures each duplicate subtree is added only once to the result.
