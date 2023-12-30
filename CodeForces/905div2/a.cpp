#include<iostream>
#include<vector>


int sum_of_digits(int x)
{
    int sum = 0;
    while(x)
    {
        sum += x%10;
        x/=10;
    }
    return sum;
}
int solve(int x, int k)
{
    if(x<k&&k<10)
        return k;
    else{
        int sum  = sum_of_digits(x);
        if(sum%k == 0)
            return x; 
        else
            return solve(x+1,k);        
    }
}
int main()
{
    int t;
    std::cin>>t;
    for(int i  = 1;i<=t;i++)
    {
        int x,k;
        std:: cin>>x>>k;
        std::cout <<solve(x,k) << std::endl;
    }
    return 0;
}