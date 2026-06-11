class Solution {
public:
    string decode(string& s, int& i){
        string result = "";
        while(i!=s.length()&&s[i]!=']'){
            if(isalpha(s[i])){
                result += s[i];
                i++;
            }
            else if(isdigit(s[i])){
                string num = "";
                while(i<s.length()&&isdigit(s[i])){
                    num += s[i];
                    i++;
                }
                int k = stoi(num);
                i++;
                string sub = decode(s, i);
                i++;
                while(k--){
                    result += sub;
                }
            }
        }
        return result;
    }
    string decodeString(string s) {
        int  i=0;
        string result = decode(s, i);

        return result;
    }
};