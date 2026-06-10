class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int len = 1;
        int n = s.length();
        for(int i=0;i<s.length()/2;i++){
            if(n%len==0){
                string sub = s.substr(0,len);
                string built = "";
                for(int i=0;i<n/len;i++){
                    built += sub;
                }
                if(built==s){
                    return true;
                }
            }
            len++;
            
        }
        return false;
    }
};