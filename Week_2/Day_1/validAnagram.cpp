class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> count_s(26);
        vector<int> count_st(26);
        for(int i=0;i<s.length();i++){
            count_s[s[i]-'a']++;
        }
        for(int i=0;i<t.length();i++){
            count_st[t[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(count_s[i]!=count_st[i]){
                return false;
            }
        }
        return true;
    }
};