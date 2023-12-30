#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        int manhattan=0;
        vector<int> points(2*n);
        for(int i = 0; i<2*n;i++)
            cin>>points[i] ;
        sort(points.begin(), points.end());
        vector<pair<int, int>> pointPairs;

        for (int i = 0; i < n; i++)
        {
            // Create pairs of the first and last points
            int first_point = points[i];
            int last_point = points[2 * n - i - 1];
            pointPairs.push_back(make_pair(first_point, last_point));
        }
        for(int i  = 1; i< n; i++)
        {
            manhattan += abs(pointPairs[i].first - pointPairs[i-1].first);
            manhattan += abs(pointPairs[i].second - pointPairs[i-1].second);
        }
        cout<<manhattan<<"\n";
        for(int i =0;i<n;i++)
            cout<<pointPairs[i].first<<" "<<pointPairs[i].second<<'\n';

    }
    return 0;
}