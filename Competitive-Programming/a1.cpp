#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

string n_cuts(vector<int> &A, vector<int> &B, int K, int N){
    unordered_map<int, int> pos;
    bool is_equal = A==B;
    if(K == 0){
        return is_equal ? "YES" : "NO";
    }
    if(K == 1 && is_equal){
        return "NO";
    }
    if(N == 2){
        if(is_equal){
            return K%2 == 0 ? "YES" : "NO";
        }
        return K%2 == 0 ? "NO" : "YES";
    }
    int num_out_of_order = 0;
    for(int i =0;i<N;i++){
        pos[A[i]] = i;
    }
    for(int i =0;i<N;i++){
        if(pos[B[i]] > pos[B[(i+1)%N]]){
            num_out_of_order++;
        }
    }
    return num_out_of_order == 1 ? "YES" : "NO";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    freopen("consecutive_cuts_chapter_1_input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> n;
    vector<int> A;
    vector<int> B;
    for(int i =0;i<n;i++){
        int N,K;
        cin >> N;
        A.resize(N);
        B.resize(N);
        cin>>K;
        for(int j =0;j<N;j++){
            cin>>A[j];
        }
        for(int j = 0; j<N;j++){
            cin>>B[j];
        }
        string ans = n_cuts(A,B, K,N);
        cout<<"Case #"<<i+1<<":"<<ans<<endl;
    }
    return 0;
}