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
    int getDecimalValue(ListNode* head) {
        vector<int> num;
        ListNode* temp=head;
        while(temp!=NULL){
            num.push_back(temp->val);
            temp=temp->next;
        }
        int sum=0;
        for(int i=0;i<num.size();i++){
            num[i]=num[i]*pow(2, num.size() - i-1);
            sum=sum+num[i];
        }
    return sum;
    }
};