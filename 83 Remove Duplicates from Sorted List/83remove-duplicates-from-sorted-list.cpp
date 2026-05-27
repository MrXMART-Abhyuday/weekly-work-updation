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
        int i=0;
        while(temp!=NULL){
            count.push_back(temp->val);
            temp=temp->next;
        }
        ListNode * tempo=head;
        count.erase(unique(count.begin(), count.end()), count.end());
        while(tempo!=NULL and i<count.size()-1){
            tempo->val=count[i];
            i++;
            tempo=tempo->next;
        }
        tempo->val=count[i];
        tempo->next=NULL;
return head;}
};