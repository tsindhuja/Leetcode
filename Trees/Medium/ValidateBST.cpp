/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool Traverse(TreeNode* node, TreeNode* lowerbound, TreeNode* upperbound){
        if(node == NULL) return true;
        if(lowerbound!=NULL && node->val<=lowerbound->val) return false;
        if(upperbound!=NULL && node->val>=upperbound->val) return false;
        
        return Traverse(node->left, lowerbound, node) && Traverse(node->right, node, upperbound);
        
    }
    bool isValidBST(TreeNode* root) {
        
        return Traverse(root, NULL, NULL);
    }
};