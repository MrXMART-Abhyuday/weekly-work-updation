class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {

        sort(deck.begin(), deck.end());

        int n = deck.size();
        vector<int> ans(n);

        queue<int> q;

        // Store all indices
        for (int i = 0; i < n; i++) {
            q.push(i);
        }

        // Place each sorted card at the correct index
        for (int i = 0; i < n; i++) {

            int index = q.front();
            q.pop();

            ans[index] = deck[i];

            // Simulate moving the next top card to the bottom
            if (!q.empty()) {
                q.push(q.front());
                q.pop();
            }
        }

        return ans;
    }
};