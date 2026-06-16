class Solution {
private:
    ListNode* solve(ListNode* list1,ListNode* list2){
        if(list1==NULL){
            return list2;
        }
        ListNode* curr1 = list1;
        if(curr1->next==NULL){
            curr1->next = list2;
            return list1;
        }
        ListNode* next1 = curr1->next;
        ListNode* curr2 = list2;
        while(next1!=NULL&&curr2!=NULL){
            int value = curr2->val;

            if(value>=curr1->val&&value<=next1->val){
                ListNode* temp = curr2->next;
                curr1->next = curr2;
                curr2->next = next1;
                curr1 = curr2;
                curr2 = temp;
                next1 = curr1->next;


            }
            else{
                curr1 = next1;
                next1 = next1->next;
                if(next1==NULL){
                    curr1->next= curr2;
                    return list1;
                }
            }
        }
        return list1;
    }
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL){
            return list2;
        }
        else if(list2==NULL){
            return list1;
        }
        if(list1->val<=list2->val){
            return solve(list1,list2);
        }
        else{
            return solve(list2,list1);
        }
    }
};