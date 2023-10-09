#include <iostream>
#include <vector>
#include <cstdio>
#include <unordered_map>

using namespace std;

unordered_map<unsigned long long int, vector<int>> memo;

vector<int> findDivisors(unsigned long long int n, int targetSum) {
    if (n == 1 && targetSum == 41) {
        return {1};
    }
    
    if (n <= 0 || targetSum > 41) {
        return {};
    }
    
    if (memo.find(n) != memo.end()) {
        return memo[n];
    }

    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            vector<int> result = findDivisors(n / i, targetSum - i);
            if (!result.empty()) {
                result.push_back(i);
                memo[n] = result;
                return result;
            }
        }
    }

    return {};
}

int main() {
    // Redirect input and output to files
    freopen("output.txt", "w", stdout);
    freopen("sum_41_chapter_1_validation_input.txt", "r", stdin);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        unsigned long long int P;
        cin >> P;
        cout << "Case #" << i + 1 << ": ";

        vector<int> divisors = findDivisors(P, 41);

        if (!divisors.empty()) {
            cout << divisors.size() << " ";
            for (int j = 0; j < divisors.size(); j++) {
                cout << divisors[j];
                if (j < divisors.size() - 1) {
                    cout << " ";
                }
            }
        } else {
            cout << -1;
        }

        cout << endl;
    }

    return 0;
}
