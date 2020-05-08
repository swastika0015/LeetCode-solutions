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
    TreeNode * findParent(TreeNode * root, int value)
    {
        if(!root)
            return NULL;
        if((root->left && root->left->val==value) || (root->right && root->right->val==value))
            return root;
        if(root->left)
        {
            TreeNode * leftParent = findParent(root->left,value);
            if(leftParent)
                return leftParent;
        }
        
        if(root->right)
        {
            TreeNode * rightParent = findParent(root->right,value);
            if(rightParent)
                return rightParent;
        }
        return NULL;
    }
    int depth(TreeNode * root, int value)
    {
        if(!root)
            return 1000000;
        if(root->val==value)
            return 0;
        if((root->left && root->left->val==value) || (root->right && root->right->val==value))
            return 1;
        int ldepth=1000000,rdepth=1000000;
        if(root->left)
            ldepth=1+depth(root->left,value);
        if(root->right)
            rdepth=1+depth(root->right,value);
        return min(ldepth,rdepth);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        TreeNode * xParent=findParent(root,x);
        TreeNode * yParent=findParent(root,y);
        if(depth(root,x)==depth(root,y))
            if(xParent==yParent)
                return false;
            else
                return true;
        else
            return false;
    }
};