class Solution {
public:
    void generate(int n, int open, int close, string valid, vector<string>& result){
        if(open==n && close==n){
            result.push_back(valid);
            return;
        }
        if(open<n){
            generate(n, open+1, close, valid+'(', result);
        }
        if(close<n&&open>close){
            generate(n, open, close+1, valid+')', result);
        }
        
    }
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        int open = 0;
        int close = 0;
        string valid = "";
        generate(n, open, close, valid, result);
        return result;
    }
};