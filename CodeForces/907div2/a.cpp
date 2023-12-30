#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int power = 2;
        bool sorted = false;

        while (power <= n) {
            bool changes = false;

            for (int j = 0; j < n - 1; j++) {
                if (v[j] > v[j + 1]) {
                    int k = 1;
                    while (k <= power && v[j] > v[j + 1]) {
                        --v[j];
                        k++;
                        changes = true;
                    }
                }
            }

            if (!changes) {
                sorted = true;
                break;
            }

            power = pow(2, power);
        }
        for(auto i = v.begin(); i != v.end(); i++)
        {
            cout << *i << " ";
        }
        cout << endl;

        if (sorted || is_sorted(v.begin(), v.end())) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }

    return 0;
}
