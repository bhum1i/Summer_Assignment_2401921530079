class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0;
        int end = height.size()-1;
        int quantity = 0;
        int maxi = INT_MIN;
        while(start<=end){
            int width = end - start;
            int minHeight = min(height[start],height[end]);
            quantity = width*minHeight;
            maxi = max(maxi,quantity);
            if(height[start]<height[end]){
                start++;
            }
            else{
                end--;
            }
        }
        return maxi;
    }
};