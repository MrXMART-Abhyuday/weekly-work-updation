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
    ListNode* partition(ListNode* head, int x) {
        vector<int> small;
        vector<int> other;
        ListNode* temp=head;
        ListNode* tempo=head;
        while(temp!=NULL){
            if(temp->val<x){
                small.push_back(temp->val);
            }
            else{
                other.push_back(temp->val);
            }
            temp=temp->next;
        }int i=0;
        while(tempo!=NULL && i<small.size()){
            tempo->val=small[i];
            i++;
            tempo=tempo->next;
        }int j=0;
        while(tempo!=NULL && j<other.size()){
            tempo->val=other[j];
            j++;
            tempo=tempo->next;
        }
    return head;}
};