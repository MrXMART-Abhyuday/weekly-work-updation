class Solution {
public:
    struct Node {
        int len;
        char leftChar, rightChar;
        int leftCount, rightCount, best;

        Node() {
            len = 0;
            leftChar = rightChar = '#';
            leftCount = rightCount = best = 0;
        }

        Node(char c) {
            len = 1;
            leftChar = rightChar = c;
            leftCount = rightCount = best = 1;
        }
    };

    vector<Node> tree;

    Node merge(Node a, Node b) {
        if (a.len == 0) return b;
        if (b.len == 0) return a;

        Node res;
        res.len = a.len + b.len;

        res.leftChar = a.leftChar;
        res.rightChar = b.rightChar;

        res.leftCount = a.leftCount;
        res.rightCount = b.rightCount;

        // Entire left part has the same character
        if (a.leftCount == a.len && a.rightChar == b.leftChar)
            res.leftCount = a.len + b.leftCount;

        // Entire right part has the same character
        if (b.rightCount == b.len && a.rightChar == b.leftChar)
            res.rightCount = b.len + a.rightCount;

        res.best = max(a.best, b.best);

        // Join the two middle portions
        if (a.rightChar == b.leftChar) {
            res.best = max(res.best, a.rightCount + b.leftCount);
        }

        return res;
    }

    void build(int node, int l, int r, string &s) {
        if (l == r) {
            tree[node] = Node(s[l]);
            return;
        }

        int mid = (l + r) / 2;

        build(node * 2, l, mid, s);
        build(node * 2 + 1, mid + 1, r, s);

        tree[node] = merge(tree[node * 2], tree[node * 2 + 1]);
    }

    void update(int node, int l, int r, int pos, char c) {
        if (l == r) {
            tree[node] = Node(c);
            return;
        }

        int mid = (l + r) / 2;

        if (pos <= mid)
            update(node * 2, l, mid, pos, c);
        else
            update(node * 2 + 1, mid + 1, r, pos, c);

        tree[node] = merge(tree[node * 2], tree[node * 2 + 1]);
    }

    vector<int> longestRepeating(string s, string queryCharacters,
                                 vector<int>& queryIndices) {

        int n = s.size();

        tree.resize(4 * n);

        build(1, 0, n - 1, s);

        vector<int> ans;

        for (int i = 0; i < queryCharacters.size(); i++) {
            int pos = queryIndices[i];
            char c = queryCharacters[i];

            update(1, 0, n - 1, pos, c);

            ans.push_back(tree[1].best);
        }

        return ans;
    }
};