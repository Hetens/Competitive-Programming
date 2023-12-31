#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
  
void solve(int P) {
  int curr_sum = 0;
  vector<int> factors;
  for (int i = 2; i*i <= P; ) {
    if (P % i == 0) {
      factors.push_back(i);
      curr_sum += i;
      P /= i;
    } else {
      i++;
    }
  }
  if (P > 1) {
    curr_sum += P;
    factors.push_back(P);
  }
  if (curr_sum > 41) {
    cout << " -1";
    return;
  }
  while (curr_sum < 41) {
    factors.push_back(1);
    curr_sum++;
  }
  cout << " " << factors.size();
  for (int f : factors) {
    cout << " " << f;
  }
}

int main() {
    freopen("output.txt", "w", stdout);
    freopen("sum_41_chapter_1_input.txt", "r", stdin);
  int T;
  cin >> T;
  
   
  for (int t = 1; t <= T; t++) {
    int P;
    cin>>P;
    cout << "Case #" << t << ":";
    solve(P);
    cout << endl;
  }
  return 0;
}