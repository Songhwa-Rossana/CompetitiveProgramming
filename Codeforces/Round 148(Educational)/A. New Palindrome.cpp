#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

bool isPalindromePossible(const string& s) {
    unordered_map<char, int> charCount;

    // Count the frequency of each character
    for (char c : s) {
        charCount[c]++;
    }

    int oddCount = 0;
    for (const auto& pair : charCount) {
        if (pair.second % 2 != 0) {
            oddCount++;
        }
    }

    // Palindrome is possible if there is at most one character with an odd count,
    // and the length of the string is even
    return oddCount <= 1 && s.length() % 2 == 0;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        if (isPalindromePossible(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

