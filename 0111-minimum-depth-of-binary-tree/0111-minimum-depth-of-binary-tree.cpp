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
    int minDepth(TreeNode* root) {
        if(root == NULL) return 0;  //edge case
        //if left not available go for right
        if(root->left ==NULL){
            return 1+minDepth(root->right);
        }
        // if right not available go for left
        if(root->right == NULL){
            return 1+minDepth(root->left);
        }
        // if both present then normal
        return 1+min(minDepth(root->left),minDepth(root->right));
    }
};