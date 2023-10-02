#include<iostream>

using namespace std;
int main()
{
    int test;
    freopen("cheeseburger_corollary_2_input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>test;
    for(int i =0;i<test; i++){
        unsigned long long int a,b,c;
        cin>>a>>b>>c;

        unsigned long long int count_patty,buns,ans = 0;

        if(a>c&& b>c){
            cout<<"Case #"<<i+1<<": "<<0<<endl;
            continue;
        }
        else if(a>c&&b<=c){
            buns  = (c/b)*2;
            ans = buns-1;
        }
        else if(a<=c&&b>c){
            buns  = (c/a);
            ans = buns;
        }
        else{
            if(a>=b){
                buns = (c/b)*2;
                ans = buns-1;
                int rem = c - b*(c/b);
                if(rem>=a){
                    ans+=rem/a;
                }
            }
            else{
                int rem;
                if(2*a<=b){
                    ans =c/a;
                    rem = c - a*(c/a);
                }
                else{
                    ans = (c/b)*2-1;
                    rem = c - b*(c/b);

                }

                if(rem>=a || rem>=b){
                    ans+=1;
                }
            }
        }
        
        //what is the case when you buy one double one single
        // when both are less than c then you do whihc one gives more buns now in the more buns if a 
        //c/a*2 or c/b*2 if c/a  i can make 100 times 2 burgers in c/b
        cout<<"Case #"<<i+1<<": "<<ans<<endl;
    }
    return 0;

}