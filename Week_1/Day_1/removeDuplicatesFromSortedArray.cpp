class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int start = 0;
        int end = 1;
        while(end<nums.size()){
            if(nums[start]==nums[end]){
                end++;
            }
            else{
                start++;
                nums[start]=nums[end];
            }
        }
        return start+1;
    }
};