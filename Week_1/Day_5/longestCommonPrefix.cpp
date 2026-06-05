class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minlen=INT_MAX;
        for(int i=0;i<strs.size();i++){
            minlen = min((int)strs[i].length(),minlen);
        }
        string sub = "";
        int end = 1;
        bool ismis = false;
        while(end<=minlen&&!ismis){
            sub = strs[0].substr(0,end);
            for(int i=1;i<strs.size();i++){
                if(strs[i].substr(0,end)!=sub){
                    ismis = true;
                    break;
                }
            }
            if(!ismis){
                end++;
            }
        }
        sub = strs[0].substr(0,end-1);
        return sub;
    }
};