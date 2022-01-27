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
    TreeNode *ans = NULL;
    
    TreeNode* searchBST(TreeNode* root, int val) {
        
        ans = root;
        
        if (root == NULL) { 
            return NULL; 
        }

        else if (root->val > val) {
            searchBST(root->left, val);    
        }
        else if (root->val < val) {
            searchBST(root->right, val);    
        }
        
        return ans;
    }
};
