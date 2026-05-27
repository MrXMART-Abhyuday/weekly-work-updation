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
    ListNode* sortList(ListNode* head) {
        vector<int> store;
        ListNode* temp=head;
        while(temp!=NULL){
            store.push_back(temp->val);
            temp=temp->next;
        }
        temp=head;
        sort(store.begin(),store.end());
        int i=0;
        while(temp!=NULL && i<store.size()){
            temp->val=store[i];
            i++;
            temp=temp->next;
        }
    return head;}
};