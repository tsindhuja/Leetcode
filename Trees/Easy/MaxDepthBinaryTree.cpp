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
    //vector<TreeNode> left, right;
    int left, right;
    void depthCalc(TreeNode* root){
        
        if(root->left == NULL && root->right == NULL) return;
        if(root->left !=NULL && root->right !=NULL){
            left++;
            depthCalc(root->left);
            right++;
            depthCalc(root->right);
        }
        
        else if(root->left != NULL) {left++;
        depthCalc(root->left);}
        
        else if(root->right!=NULL) {right++;
        depthCalc(root->right);}
        else return;
    }
    int maxVal(int x, int y){
        return x > y ? x : y;
    }
    int maxi=1;
    void dfs(TreeNode* root, int level){
        
        if(root==NULL){
            maxi = maxVal(level-1,maxi);
            return;
        }
        dfs(root->left, level+1);
        dfs(root->right, level+1);
    }
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;
        dfs(root, 1);
        return maxi;
        if(root->left == NULL && root->right == NULL) return 1;
        left = 1;
        right = 1;
        depthCalc(root);

        if(left>right) return left;
        return right;
 
        
    }
};