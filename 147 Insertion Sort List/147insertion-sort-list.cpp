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
    ListNode* insertionSortList(ListNode* head) {
        ListNode* temp=head;
        if(temp->next==NULL) return head;
        vector<int> count;
        int i=0;
        while(temp!=NULL){
            count.push_back(temp->val);
            temp=temp->next;
        }
        sort(count.begin(),count.end());
        ListNode * tempo=head;
  
        while(tempo!=NULL and i<count.size()){
            tempo->val=count[i];
            i++;
            tempo=tempo->next;
        }
        
return head;
    }
};