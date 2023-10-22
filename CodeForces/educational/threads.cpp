#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>> t;
    for(int i =0;i<t;i++)
    {
        int a,b,c, operation = 0;
        bool flag = false;
        cin>>a>>b>>c;
        vector<int>v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sort(v.begin(),v.end());   
        if(v[0]==v[1]&& v[1]== v[2])
        {
            cout<<"YES\n";
        }
        else
        {
            while(operation!= 3 && !flag)
            {
                int count  =1;
                operation ++;
                //operation is greatest - smallest
               
                v.back() = v.back()-v[0];
                v.push_back(v[0]);

                for(int i  =1; i<v.size(); i++)
                {
                    if(v[i] == v[i-1])
                        count ++;
                }
                if(count == v.size())
                    flag = true;
                else
                    sort(v.begin(),v.end());
            }
            int count  = 1;
            for(int i  =1; i<v.size(); i++)
                {

                    if(v[i] == v[i-1])
                        count ++;
                }
       
            if(count == v.size())
                flag = true;
            if(flag == true)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
    return 0;
}