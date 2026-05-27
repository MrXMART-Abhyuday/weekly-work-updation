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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()) return NULL;
        // ListNode* temp=lists[0];
        ListNode* temp = NULL;

        int start=0;
        while(start<lists.size() && lists[start]==NULL){
            start++;
        }

        if(start==lists.size()) return NULL;

        temp=lists[start];
        int i=start+1;
        while(i<lists.size()){
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next=lists[i];
            i++;
        }
        vector<int>combo;
        ListNode* tempo=lists[start];
        while(tempo!=NULL){
            combo.push_back(tempo->val);
            tempo=tempo->next;
        }
        int j=0;
        sort(combo.begin(), combo.end());
        tempo=lists[start];
        while(tempo!=NULL && j<combo.size()){
            tempo->val=combo[j];
            j++;
            tempo=tempo->next;
        }
    return lists[start];}
};