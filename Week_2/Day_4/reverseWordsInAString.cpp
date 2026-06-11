class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        int j=0;
        int end = 0;
        while(j<s.length()){
            i=j;
            while(j<s.length()&&s[j]!=' '){
                j++;
            }
            end = j-1;
            while(i<end){
                swap(s[i],s[end]);
                i++;
                end--;
            }
            if(j<s.length()){
                j++;
            }
        }
        return s;
    }
};