#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath> 
#include<unordered_map> 
using namespace std;

long long int nhappytrees(vector<pair<int, int>> &well, vector<pair<int, int>> &tree, int q, int n) {
    long long int score = 0, current_score;
    unordered_map<int, int> tree_map_x, tree_map_y;
    for(int i =0;i<n;i++) {
        tree_map_x[tree[i].first]++;
        tree_map_y[tree[i].second]++;
    }
    for(int i =0;i<q;i++){
        current_score = 0;
        for(auto it = tree_map_x.begin(); it != tree_map_x.end(); it++) {
            current_score += pow(it->first - well[i].first,2) * it->second;
            
        }
        score += current_score;
    }

    for(int i =0;i<q;i++){
        current_score = 0;
        for(auto it = tree_map_y.begin(); it != tree_map_y.end(); it++) {
            current_score += pow(it->first - well[i].second,2) * it->second;
        
        }
        score += current_score;
    }
    return score%1000000007;
}

int main() {
    int testcase, n, q;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> testcase;

    for(int t = 0; t < testcase; t++) {
        cin >> n;
        vector<pair<int, int>> well, tree;
        
        for(int i = 0; i < n; i++) {
            int temp, temp1;
            cin >> temp >> temp1;
            tree.push_back(make_pair(temp, temp1));
        }

        cin >> q;
        for(int i = 0; i < q; i++) {
            int temp, temp1;
            cin >> temp >> temp1;
            well.push_back(make_pair(temp, temp1));
        }

        cout << "Case #" << t + 1 << ": " << nhappytrees(well, tree, q, n) << "\n";
    }

    return 0;
}
