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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        ListNode* temp= list1;
        while(temp->next!=NULL){
            temp=temp->next;
        }

        temp->next=list2;
        vector<int> sorting;
        ListNode* ans= list1;
        while(ans!=NULL){
            sorting.push_back(ans->val);
            ans=ans->next;
        }
        ans=list1;
        sort(sorting.begin(),sorting.end());
          // 1 2 4 1 3 4  
          // 1 1 2 3 4 4
          int i=0;
        while(ans!=NULL && i<sorting.size()){
            ans->val=sorting[i];
            i++;
            ans=ans->next;
        }
    return list1;
    }
};