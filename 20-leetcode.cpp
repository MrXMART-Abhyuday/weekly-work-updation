#include <iostream>
#include <vector>
using namespace std;

int main() {

    string s;
    cin >> s;

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
                break;
            }
        }

        if (!removed) {
            cout << "false";
            return 0;
        }
    }

    cout << "true";
    return 0;
}