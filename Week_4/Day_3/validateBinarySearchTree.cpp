class Solution {
public:
    bool isBST(TreeNode* root, long long minValue, long long maxValue){
        if(root==NULL){
            return true;
        }
        if(root->val>minValue&&root->val<maxValue){
            bool left = isBST(root->left,minValue, root->val);
            bool right = isBST(root->right, root->val, maxValue);
            return left&&right;
        }
        else{
            return false;
        }
    }
    bool isValidBST(TreeNode* root) {
        return isBST(root, LLONG_MIN, LLONG_MAX);
    }
};