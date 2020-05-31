/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* insert(TreeNode* root, int val)
    {
        if(root==NULL)
        {
            TreeNode * temp=new TreeNode(val);
            return temp;
        }
        if(val<root->val)
            root->left=insert(root->left,val);
        else
            root->right=insert(root->right,val);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int n=preorder.size();
        if(n==0)
            return NULL;
        TreeNode* root= new TreeNode(preorder[0]);
        for(int i=1;i<n;i++)
        {
            root=insert(root,preorder[i]);
        }
        return root;
    }
};