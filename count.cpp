#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    cout << "Enter text: ";
    getline(cin, text);

    string emoji = "🫂";   // the emoji to count
    int countEmoji = 0;

    // Loop through string and check for emoji match
    for (size_t i = 0; i < text.size(); ) {
        // Compare substring with emoji
        if (text.compare(i, emoji.size(), emoji) == 0) {
            countEmoji++;
            i += emoji.size();  // move ahead by emoji length
        } else {
            i++; // move one byte ahead
        }
    }

    cout << "Number of 🫂 emojis: " << countEmoji << endl;

    return 0;
}

