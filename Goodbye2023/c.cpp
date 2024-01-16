#include<iostream>
#include<vector>

using namespace std;


int main()
{
    int n; 
    cin>>n;
    while(n--)
    {
        int len;
        cin>>len;
        vector<int> a(len);
        //odd turns are maximize  even turns are minimize

        for(int i =0;i<len;i++)
            cin>>a[i];
        
            for(int j =1;j<len;j++)//j is the sliding window
            {
                int i =0; //start from index 0 of the array
                while(i <= len)
                {

                }
            }
    }

}