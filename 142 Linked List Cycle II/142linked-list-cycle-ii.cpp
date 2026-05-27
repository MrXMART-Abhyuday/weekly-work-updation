/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode * fast=head;
        ListNode * slow=head;
        bool cycle=false;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow){
             cycle=true;   
             break;
            }
        }
        if(cycle==true){
            slow=head;
            while(slow!=fast){
                slow=slow->next;
                fast=fast->next;
            }
            return slow;

        }
// 3 2 0 4 2 0 4 2 0 4 2 0 4
// s s s s   
// f   f   f   f
// s s
//             f f -------node 2 it should be 4 na??? 

// 1 2 1 2 1 2 1 2 1 2
// s s s  
// f   f   f
// s s
//         f f ------- node 2
return NULL;
    }
};