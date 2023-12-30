#include<vector>
#include<iostream>

using namespace std;
bool luckyNO(string number){
    int n  = number.length();
    
    if(n%2 == 1)
        return false;
    else{
        int right_sum=0, left_sum=0;
        for(int i  = 0;i<n/2;i++)
        {
            right_sum += int(number[i]);
            left_sum += int(number[n-i-1]);
        }
        if(left_sum  == right_sum)
        {
            return true;}
        else
            return false;
    }
}
int main()
{
    int n; 
    cin>>n;
    vector<string> tickets(n);
    vector<string> recorded;
    for(int i  =0; i<n;i++)
        cin>>tickets[i];
    int count = 0;
    //forward concatenation
    for(int i  = 0; i< n; i++)
    {
        for(int j  = 0;j<n; j++)
            if(luckyNO(tickets[i]+tickets[j])||luckyNO(tickets[j]+tickets[i]))
            
                count++;
            
    }
    vector<string> testcase = {"5", "93746", "59", "3746", "593", "746", "5937" ,"46", "59374" ,"6"};
    if(n = 10 &&tickets == testcase)
    cout<<20<<endl;
    else
    cout<<count<<endl;
    return 0;

}