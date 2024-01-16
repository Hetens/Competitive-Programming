#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<set>

#define ll long long

using namespace std;

int main()
{
    int t;
    set<int> year = {1, 7, 17, 119, 289, 2023};
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        int current_product =1;
        for(int i =0;i<n;i++)
        {
            cin>>a[i];
            current_product *= a[i];

        }


        if(year.find(current_product) != year.end())
        {
            cout<<"YES"<<endl;
            cout<<2023/current_product<<" ";
            for(int i =0;i<k-1;i++)
                cout<<1<<" ";


        }
        else
            cout<<"NO"<<endl;
        
    }
    return 0;
}