class Solution {
private:
    bool checkEqual(int a[26],int b[26]){
        for(int i=0;i<26;i++){
            if(a[i]!=b[i]){
                return false;
            }
        }
        return true;
    }
public:
    bool checkInclusion(string s1, string s2) {
        //character count array
        int count1[26]={0};
        for(int i=0;i<s1.length();i++){
            count1[s1[i]-'a']++;
        }
       
        //traversing s2 with a window of size s1 length

        int i=0;
        int windowSize=s1.length();
        int count2[26]={0};

        //running for the first window
        while(i<windowSize&&i<s2.length()){
            count2[s2[i]-'a']++;
            i++;
        }
        if(checkEqual(count1,count2)){
            return true;
        }
        //next window progress
        while(i<s2.length()){
            //adding new character to the window
            count2[s2[i]-'a']++;

            //removing the old character from the window
            char oldChar = s2[i-windowSize];
            count2[oldChar-'a']--;
            i++;

            //again checking if they are equal
            if(checkEqual(count1,count2)){
            return true;
          }
        }
        return false;

    }
};