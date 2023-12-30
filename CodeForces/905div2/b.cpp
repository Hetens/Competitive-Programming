#include<iostream>
#include<vector>

std::string swap_adj(std::string k,int l, int r)
{
    char temp = k[l];
    k[l] = k[r];
    k[r] = temp;
    return k;
}
void solve(int x, std::string k)
{
    // i need to check divisibility for 2^i for i 1 -x;
    int no_of_moves = 0;
    int divisor = 1;
    int l=x-2 , r=x-1;
    if(x == 1)
        std::cout << "-1" << std::endl;         
    else{
            while(no_of_moves != -1)
            {
                if(k[l] =='1' && k[r] == '0' &&l>=0 && divisor == x-l)
                {
                    std::cout<<no_of_moves<<" ";
                    divisor += 1;
                    l--;
                    r--;
                }
                else if(k[l]=='0')
                {
                    
                }
            }
    }
    
}
int main()
{
    int t;
    std::cin>>t;
    for(int i  = 1;i<=t;i++)
    {
        int x;
        std:: cin>>x;
        std::string k;
        std:: cin>>k;
        solve(x,k);
    }
    return 0;
}