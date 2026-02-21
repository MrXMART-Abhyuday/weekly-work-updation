class Solution {
public:
    bool isValid(string s) {

        vector<char> arr(s.begin(), s.end());

        while (!arr.empty()) {

            bool removed = false;

            for (int i = 0; i < arr.size() - 1; i++) {

                if ((arr[i] == '(' && arr[i+1] == ')') ||
                    (arr[i] == '{' && arr[i+1] == '}') ||
                    (arr[i] == '[' && arr[i+1] == ']')) {

                    arr.erase(arr.begin() + i);
                    arr.erase(arr.begin() + i);

                    removed = true;
                    break;  // restart scanning
                }
            }

            if (!removed)
                return false;
        }

        return true;
    }
};