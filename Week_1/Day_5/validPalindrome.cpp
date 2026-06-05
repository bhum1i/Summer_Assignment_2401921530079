class Solution {
private:
    
    bool validCharacter(char ch){
        if((ch>='a'&&ch<='z')||(ch>='0'&&ch<='9')||(ch>='A'&&ch<='Z')){
            return true;
        }
        
        return false;
    
    }

    char toLowerCase(char ch){
    if((ch>='a'&& ch<='z')||(ch>='0'&&ch<='9')){
        return ch;
    }
    else{
        char temp = ch -'A'+'a';
        return temp;
    }
}

public:

    bool isPalindrome(string s) {
        int start = 0;
        
        string temp = "";
        for(int j=0;j<s.length();j++){
            if(validCharacter(s[j])){
                temp.push_back(s[j]);
            }
        }
        
        int end = temp.length()-1;
        while(start<=end){
            if(toLowerCase(temp[start])!=toLowerCase(temp[end])){
                return false;;
            }
            else{
                start++;
                end--;
            }
        }
        return true;
        
    }
};