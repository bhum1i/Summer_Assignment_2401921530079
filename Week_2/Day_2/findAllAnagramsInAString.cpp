class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> p_freq(26,0);
        for(char c:p){
            p_freq[c-'a']++;
        }
        vector<int> win_freq(26,0);
        int len = p.length();
        if(len>s.length()){
            return {};
        }
        for(int i=0;i<len;i++){
            win_freq[s[i]-'a']++;
        }
        vector<int> idx;
        if(win_freq==p_freq){
           idx.push_back(0);
        }
        for(int i=0;i<s.length()-len;i++){
            win_freq[s[i]-'a']--;
            win_freq[s[i+len]-'a']++;
            if(win_freq==p_freq){
                idx.push_back(i+1);
            }
        }
        return idx;
    }
};