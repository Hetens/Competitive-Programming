#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool isPalindrome(const string& s) {
    int l = 0;
    int r = s.length() - 1;
    while (l < r) {
        if (s[l] != s[r]) {
            return false;
        }
        l++;
        r--;
    }
    return true;
}

string solve(int k, string s) {
    if (k == 0) {
        if (isPalindrome(s)) {
            return "Yes";
        } else {
            return "No";
        }
    }
    
    if (s.length() == 0 && k == 0) {
        return "Yes";
    }
    else if (s.length() == 0 && k != 0){
        return "No";
    }

    // Check if the first and last characters match
    if (s[0] == s[s.length() - 1]) {
        // If they match, remove one of them and continue
        return solve(k, s.substr(1, s.length() - 2));
    } else {
        // If they don't match, try removing the first or the last character
        string withoutFirst = solve(k - 1, s.substr(1));
        string withoutLast = solve(k - 1, s.substr(0, s.length() - 1));

        if (withoutFirst == "Yes" || withoutLast == "Yes") {
            return "Yes";
        }
    }

    return "No";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;
        cout << solve(k, s) << endl;
    }
    return 0;
}
