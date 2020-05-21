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
    int kthSmallest(TreeNode* root, int &count, int k)
    {
        if(!root)
            return INT_MAX;
        int left=kthSmallest(root->left,count,k);
        if(left!=INT_MAX)
            return left;
        count++;
        if(count==k)
            return root->val;
        return kthSmallest(root->right,count,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        int count=0;
        return kthSmallest(root,count,k);
    }
};