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
    bool isPalindrome(ListNode* head) {
        ListNode* temp=head;
        vector<int> copy;
        while(temp!=NULL){
            copy.push_back(temp->val);
            temp=temp->next;
        }
        int i=0;
        int j=copy.size()-1;
        while(i<j){
            if(copy[i]!=copy[j]) return false;
            else if(copy[i]==copy[j]){
                i++;
                j--;
            }
        }
        return true;
    }
};