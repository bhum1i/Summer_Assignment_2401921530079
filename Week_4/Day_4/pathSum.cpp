class Solution {
public:
    bool target(TreeNode* root, int targetSum){
        if(root==NULL){
            return false;
        }
        if(root->left==NULL&&root->right==NULL){
            if((targetSum-root->val)==0){
                return true;
            }
        }
        if(target(root->left, (targetSum-root->val))||target(root->right, (targetSum-root->val))){
            return true;
        }
        return false;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return target(root, targetSum);
    }
};