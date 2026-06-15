class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        ListNode* temp = head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        int mid = count/2;
        temp = head;
        int i = 0;
        while(temp!=NULL&&i<mid){
            temp=temp->next;
            i++;
        }
        return temp;
            
    }
};