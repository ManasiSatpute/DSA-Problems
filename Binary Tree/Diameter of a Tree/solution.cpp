
  struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
  class Solution {
  public:
    pair<int , int> diameter(TreeNode* root){
        if(root == NULL){
            return make_pair(0 , 0);
        }

        pair<int  , int> leftInfo = diameter(root->left); 
    }
    int diameterOfBinaryTree(TreeNode* root) {
        return diameter(root).first;
       
    }
};
