class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head;
        int sum = 0;
        vector<int> sumo;
        while(temp != NULL){
            if(temp->val == 0){
                if(sum != 0) sumo.push_back(sum);
                sum = 0;
            }
            else{
                sum = sum + temp->val;
            }
            temp = temp->next;
        }
        temp = head;
        int i = 0;
        while(i < sumo.size()){
            temp->val = sumo[i];
            i++;
            temp = temp->next;
        }
        temp = head;
        for(int i = 1; i < sumo.size(); i++){
            temp = temp->next;
        }
        temp->next = NULL;

        return head;
    }
};