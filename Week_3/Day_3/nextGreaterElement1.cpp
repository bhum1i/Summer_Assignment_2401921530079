class Solution {
public:
    vector<int> nextGreater(vector<int>& nums2, int n){
        stack<int> s;
        vector<int> ans(n);
        for(int i=n-1; i>=0 ;i--){
            int curr = nums2[i];
            while(!s.empty()&&s.top()<curr){
                s.pop();
            }
            if(s.empty()){
                ans[i] = -1;
            }
            else{
                ans[i] = s.top();
            }
            s.push(curr);

        }
        return ans;

    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        vector<int> ans = nextGreater(nums2, n);
        unordered_map<int, int> mp;
        for(int i=0;i<n;i++){
            mp[nums2[i]] = ans[i];
        }
        vector<int> result;
        for(auto x: nums1){
            result.push_back(mp[x]);
        }
        return result;
    }
};