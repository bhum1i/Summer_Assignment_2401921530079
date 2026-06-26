class Solution {
public:
    /*int findPosition(vector<int>&  inorder, int element, int size){
        for(int i=0;i<size;i++){
            if(inorder[i]==element){
                return i;
            }
        }
        return -1;
    }*/
    void createMapping(vector<int>& inorder, unordered_map<int,int>& nodeToIndex, int size){
        for(int i=0;i<size;i++){
            nodeToIndex[inorder[i]]=i;
        }
    }
    TreeNode* solve(vector<int>& inorder, vector<int>& preorder, int& preOrderIndex, int startInorder, int endInorder,int size,unordered_map<int,int>& nodeToIndex){
        if(preOrderIndex>=size||startInorder>endInorder){
            return NULL;
        }
        
        int element = preorder[preOrderIndex++];
        TreeNode* root = new TreeNode(element);
        int position = nodeToIndex[element];
        
        root->left = solve(inorder, preorder, preOrderIndex,startInorder, position-1,size,nodeToIndex);
        root->right = solve(inorder, preorder, preOrderIndex, position+1, endInorder,size,nodeToIndex);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preOrderIndex = 0;
        int n = preorder.size();
        unordered_map<int,int> nodeToIndex;
        createMapping(inorder,nodeToIndex, n);
        TreeNode* ans = solve(inorder, preorder, preOrderIndex, 0, n-1,n,nodeToIndex);
        return ans;
    }
};