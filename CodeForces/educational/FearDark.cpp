#include <iostream>
#include <cmath>
#include <utility> // Include the utility header for std::make_pair

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        pair<int, int> P, A, B;
        cin >> P.first >> P.second;
        cin >> A.first >> A.second;
        cin >> B.first >> B.second;

        // Calculate distance between pointA and pointB
        double dcentre = sqrt(pow(B.first - A.first, 2) + pow(B.second - A.second, 2))/2;
        double dap = sqrt(pow(P.first - A.first, 2) + pow(P.second - A.second, 2));
        double dbp = sqrt(pow(P.first - B.first, 2) + pow(P.second - B.second, 2));
        double dbo = sqrt(pow(P.first, 2) + pow(P.second, 2));
        double dao = sqrt(pow(A.first, 2) + pow(A.second, 2));
        
        if(dap<=dbp && dao<=dbo)
            {
                cout<<max(dao,dap)<<endl;
            }
        else if(dap>=dbp && dao>=dbo)
        {
            cout<<max(dbo,dbp)<<endl;
        }
        else if ((dap<=dcentre || dbp<=dcentre) && (dao<=dcentre || dbo<=dcentre)){
       
           double k= max(min(dap,dbp),min(dao,dbo));
            cout<<max(k,dcentre)<<endl;
        }

        
    }

    return 0;
}
