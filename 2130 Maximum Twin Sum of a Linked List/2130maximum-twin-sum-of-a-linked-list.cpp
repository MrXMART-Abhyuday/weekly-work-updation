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
    int pairSum(ListNode* head) {
        ListNode* temp=head;
        vector<int> ans;
        if(head->next==NULL) return head->val;
        while(temp){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        int i=0;
        int j=ans.size()-1;
        vector<int> sum;
        while(i<j){
            sum.push_back(ans[i]+ans[j]);
            i++;
            j--;
        }
        int max= *max_element(sum.begin(), sum.end());
    return max;
    }
};