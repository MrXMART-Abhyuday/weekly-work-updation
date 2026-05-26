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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //0 1 2 3 4 k=2
        //4-2+1

        int k=1;
        ListNode * temp =head;  
        while(temp->next!=NULL){
            temp=temp->next;
            k++;
        }
        if (k==1) return NULL;
        temp=head;
        if (k==2) {
        //   if(n==1){
        //     return head;
        //   }
          if(n==2){
            return head->next;
          }  
        }
        if(n == k){
            return head->next;
        }
        for(int i=0;i<k-n-1;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;

    return head;}
};