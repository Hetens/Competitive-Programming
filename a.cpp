#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i  =0; i<t;i++)
    {
        int chest,key,heavy;
        cin>>chest>>key>>heavy;
        if(chest<key)
        {
            //pick up chest
            if(key-chest>heavy)
            {
                //first distance
                int d1 = heavy + chest;
                int d2 = 2*(key-d1);
                cout<<d1+d2<<endl;
            }
            else{
                cout<<key<<endl;
            }
        }
        else{
            cout<<chest<<endl;
        }
        
    }
}