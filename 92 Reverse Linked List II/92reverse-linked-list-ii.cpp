class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        if(head==NULL || head->next==NULL)
            return head;

        vector<int> ans;

        ListNode* temp=head;

        while(temp!=NULL){
            ans.push_back(temp->val);
            temp=temp->next;
        }

        int i=left-1;
        int j=right-1;

        while(i<j){
            swap(ans[i],ans[j]);
            i++;
            j--;
        }

        temp=head;
        int k=0;

        while(temp!=NULL){
            temp->val=ans[k];
            temp=temp->next;
            k++;
        }

        return head;
    }
};