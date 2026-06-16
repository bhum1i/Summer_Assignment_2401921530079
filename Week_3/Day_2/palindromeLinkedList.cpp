class Solution {
private:
    bool check_palindrome(vector<int> arr){
        int n = arr.size();
        int s = 0;
        int e = n-1;
        while(s<=e){
            if(arr[s]!=arr[e]){
                return false;
            }
            s++;
            e--;
        }
        return true;
    }
public:
    bool isPalindrome(ListNode* head) {
        vector<int> arr;
        ListNode* temp = head;
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        return check_palindrome(arr);
    }
};