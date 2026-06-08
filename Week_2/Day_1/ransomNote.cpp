class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> hash1(26);
        for(int i=0;i<magazine.length();i++){
            hash1[magazine[i]-'a']++;
        }
        for(int i=0;i<ransomNote.length();i++){
            if(hash1[ransomNote[i]-'a']==0){
                return false;
            }
            hash1[ransomNote[i]-'a']--;
        }
        return true;
    }
};