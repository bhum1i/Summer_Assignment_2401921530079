class Solution {
public:
    int strStr(string haystack, string needle) {
        int start = 0;
        int len = needle.length();
        if(needle.length()==0){
            return 0;
        }
        while((start+len-1)<haystack.length()){
            string sub = haystack.substr(start,len);
            if(sub==needle){
                return start;
            }
            else{
                start++;
            }
        }
        return -1;
        
    }
};