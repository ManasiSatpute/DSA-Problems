# Validate Binary Search Tree

## Problem Statement

Given the root of a binary tree, determine if it is a valid Binary Search Tree (BST).

A valid BST is defined as follows:
- The left subtree of a node contains only nodes with keys **strictly less** than the node's key.
- The right subtree of a node contains only nodes with keys **strictly greater** than the node's key.
- Both the left and right subtrees must also be binary search trees.

## Examples

### Example 1
**Input:**  
root = [2,1,3]  

**Output:**  
true  

### Example 2
**Input:**  
root = [5,1,4,null,null,3,6]  

**Output:**  
false  

**Explanation:**  
The root node's value is 5, but its right child has value 4, which violates the BST property.
