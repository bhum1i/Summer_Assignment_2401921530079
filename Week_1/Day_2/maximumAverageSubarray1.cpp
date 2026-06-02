class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxsum = INT_MIN;
        double sum = 0;
        int i=0;
        int j=i+k-1;
        for(int k=i;k<=j;k++){
            sum+=nums[k];
        }
        maxsum = sum;
        while(j+1<nums.size()){
            i++;
            j++;
            sum = sum-nums[i-1]+nums[j];
            maxsum = max(maxsum,sum);
        }
        return maxsum/k;
        
    }
};