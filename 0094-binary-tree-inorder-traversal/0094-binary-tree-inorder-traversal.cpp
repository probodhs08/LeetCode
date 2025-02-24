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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>arr;
        traversal(arr,root);
        return arr;
    }
    void traversal(vector<int>& arr,TreeNode* root){
        if(!root)return ;
            traversal(arr,root->left);
            arr.push_back(root->val);
            traversal(arr,root->right);

    }
};