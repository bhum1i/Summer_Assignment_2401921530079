class Solution {
public:
    TreeNode* solve(TreeNode* root, TreeNode* a,TreeNode* b){
        if(root==NULL){
            return NULL;
        }
        if(root->val>a->val&&root->val>b->val){
            return solve(root->left, a, b);
        }    
        else if(root->val<a->val&&root->val<b->val){
            return solve(root->right, a, b);
        }
        
        return root;
    }


    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return solve(root, p, q);
    }
};