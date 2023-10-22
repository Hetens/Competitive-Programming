#include <iostream>
#include <vector>
using namespace std;

using vi = vector<int>;

//return index of possible move
int check(int i, int j, vector<vector<char>> &v)
{
  if(i<0 || j<0 || i>=v.size() || j>=v[0].size())
    return -1;
  if(v[i][j]=='B')
    return 2;
  if(v[i][j]=='W')
    return 1;
  return 0;
}

string solve() {
  int r,c,possible;
  cin >> r>>c;
  vector<vector<char>> v(r, vector<char>(c));
  vector<vector<int>> visited(r+1, vector<int>(c+1));
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cin >> v[i][j];
    }
  }
  for(int i =  0; i< r; i++)
  {
    for(int j = 0; j< c; j++)
    {
      
      if(v[i][j]=='W')
      {
       
        
      }
    }
  }

}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  int T;
  cin >> T;
  for (int t = 1; t <= T; t++) {
    cout << "Case #" << t << ": " << solve() << endl;
  }
  return 0;
}