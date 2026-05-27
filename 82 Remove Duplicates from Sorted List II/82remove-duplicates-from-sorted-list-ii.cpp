/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        if(temp==NULL or temp->next==NULL) return head;
        vector<int> count;
        // while(temp!=NULL){
        //     if(temp->next != NULL && temp->val != temp->next->val){
        //         count.push_back(temp->val);
        //     }
        //     if(temp->next!=NULL && temp->val==temp->next->val){
        //         int repeat=temp->val;
        //         while(temp!=NULL && repeat==temp->val){
        //             temp=temp->next;
        //         }
        //     }
        //     temp=temp->next;
        // }
        while(temp != NULL){
            if(temp->next != NULL && temp->val == temp->next->val){
                int repeat = temp->val;
                while(temp != NULL && temp->val == repeat){
                    temp = temp->next;
                }
            }
            else{
                count.push_back(temp->val);
                temp = temp->next;
            }
        }
        if(count.empty()) return NULL;
        temp=head;
        int i=0;
        while(i<count.size()-1 &&temp!=NULL){
            temp->val=count[i];
            i++;
            temp=temp->next;
        }
        temp->val=count[i];
        temp->next=NULL;
return head;
    }
};