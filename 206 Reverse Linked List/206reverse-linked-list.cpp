class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr) return head;

        // Step 1: store values
        vector<int> vals;
        ListNode* temp = head;
        while (temp != nullptr) {
            vals.push_back(temp->val);
            temp = temp->next;
        }

        // Step 2: overwrite values in reverse order
        temp = head;
        int i = vals.size() - 1;
        while (temp != nullptr) {
            temp->val = vals[i];
            i--;
            temp = temp->next;
        }

        return head;
    }
};
