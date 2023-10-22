#include <iostream>
#include <vector>

using namespace std;

vector<vector<char>> rotate(const vector<vector<char>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    vector<vector<char>> result(cols, vector<char>(rows));

    for (int i = rows-1,l=0; i >= 0; i--) {
        for (int j = 0; j < cols; j++) {
            // Swap rows and columns
            result[j][l] = matrix[i][j];
        }
        l++;
    }

    return result;
}

int main() {
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        int n,count=0;
        cin >> n;
        vector<vector<char>> a(n, vector<char>(n));
        
        for (int k = 0; k < n; k++) {
            for (int j = 0; j < n; j++) {
                cin >> a[k][j];
            }
        }
        vector<vector<char>> rotated = rotate(a);
        for(int k =0;k<n;k++)
        {
            for(int j = 0;j<n;j++)
            {
              if(rotated[k][j]!= a[k][j])
              {
                int temp  = int(rotated[k][j] - a[k][j]);

                if(temp <0)
                {
                    temp = int('z'-a[k][j]);
                    a[k][j] = 'z';
                    rotated[k][j] = 'z';
                }
                else{
                    a[k][j]= rotated[k][j];
                    rotated = rotate(a);   


                }
                count+=temp;
              }  
             
            }

        }
        cout<<count<<endl;

    }
    
    return 0;
}
