class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> count_s(26);
        for(int i=0;i<s.length();i++){
            count_s[s[i]-'a']++;
        }
        for(int i=0;i<s.length();i++){
            if(count_s[s[i]-'a']==1){
                return i;
            }
        }
        return -1;
    }
};