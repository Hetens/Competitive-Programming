#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

double santa(vector<long double> &x, long double n) {
    sort(x.begin(), x.end());
    double ans = 0;
    
    if (n == 5) {
       long double a = (x.back() + x[x.size() - 3]) / 2 - (x[0] + x[1]) / 2;
       long double b = (x.back() + x[x.size() - 2]) / 2 - (x[0] + x[2]) / 2;
       ans  = max(a, b);
    } else {
        ans = (x.back() + x[x.size() - 2]) / 2 - (x[0] + x[1]) / 2;
    }
    
    return ans;
}

int main() {
    int test;
    freopen("here_comes_santa_claus_input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> test;

    for (int i = 0; i < test; i++) {
        long double n;
        cin >> n;
        vector<long double> x(n);

        for (int j = 0; j < n; j++) {
            cin >> x[j];
        }

        double ans = santa(x, n);

        // Use printf to format the output to 6 decimal places
        printf("Case #%d: %.6lf\n", i + 1, ans);
    }

    return 0;
}
