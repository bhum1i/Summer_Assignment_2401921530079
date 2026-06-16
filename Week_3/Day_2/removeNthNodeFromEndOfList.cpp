class Solution {
private:
    void deleteNode(ListNode* &head, int position){
        if(head==NULL){
            return;
        }
        if(position==1){
            ListNode* curr = head;
            if(head->next==NULL){
                head=NULL;
                delete curr;
                return;
            }
            else{
                head = head->next;
                curr->next = NULL;
                delete curr;
                return;
            }
        }
        int count = 1;
        ListNode* temp = head;
        ListNode* curr = NULL;
        while(count<position-1){
            temp = temp->next;
            count++;
        }
        if(temp==NULL||temp->next==NULL){
            return;
        }
        else{
            curr = temp->next;
            temp->next = curr->next;
            curr->next = NULL;
            delete curr;
        }
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            len++;
            temp = temp->next;
        }
        int position = len - n+1;
        deleteNode(head,position);
        return head;
    }
};