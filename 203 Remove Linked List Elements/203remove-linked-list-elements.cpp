class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {

        while (head != NULL && head->val == val) {
            ListNode* del = head;
            head = head->next;
            delete del;
        }

        if (head == NULL) return NULL;

        ListNode* temp1 = head;       
        ListNode* temp2 = head->next; 

        while (temp2 != NULL) {
            if (temp2->val == val) {
                temp1->next = temp2->next;
                delete temp2;
                temp2 = temp1->next;
            } else {
                temp1 = temp2;
                temp2 = temp2->next;
            }
        }

        return head;   
    }
};
