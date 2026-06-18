class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> s;
        vector<int> days(temperatures.size());
        for(int i=0;i<temperatures.size();i++){
            int curr = temperatures[i];
            while(!s.empty()&&temperatures[s.top()]<curr){
                int prev = s.top();
                s.pop();
                days[prev] = i - prev;
            }
            s.push(i);
        }
        return days;
    }
};