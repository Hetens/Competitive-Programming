#include <iostream>

using namespace std;

int main() {

    int t;
    cin>>t;
    
for(int m=0;m<t;m++){   

    int n;
    cin >> n;
    bool done = false;
    if (n>=6) {
        for (int i = 1; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                int k = n - (i + j);
                if (k != i && k != j && i % 3 != 0 && j % 3 != 0 && k % 3 != 0 && k > 0) {
                    cout<<"YES"<<endl;
                    cout << i << " " << j << " " << k << endl;
                    done = true;
                    break;
                }
                else if(k<0){
                    cout<<"NO"<<endl;
                    done = true;
                    break;
                }

            }
            if(done){
                break;
            }
        }
    }
        else if(n<6 || done ==false ){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
 return 0;
   
}
