#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long
using namespace std;


// Recursive function to return gcd of a and b 
ll gcd(ll int a, ll int b) 
{ 
if (b == 0) 
	return a; 
return gcd(b, a % b); 
} 

// Function to return LCM of two numbers 
ll lcm(ll int a, ll int b) 
{ 
	return (a / gcd(a, b)) * b; 
} 

// Function to calculate the minimum prime factor of a number
int minPrimeFactor(int n) {
    // Check if the number is divisible by 2
    if (n % 2 == 0) {
        return 2;
    }

    // Check for other prime factors
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return i;
        }
    }

    // If no prime factor is found, the number itself is prime
    return n;
}

// Calculate the minimum prime factor of a or b


// Driver program to test above function 
int main() 
{ 
	int t;
    cin>>t;
    while(t--)
    {
        ll int a,b;
        cin>>a>>b;
        if(a==1)
        {
            int ans = lcm(a,b)*b;
            cout<<ans<<endl;
        }
        else if(b==1)
        {
            int ans = lcm(a,b)*a;
            cout<<ans<<endl;
        }
        else{
           ll int ans = min(minPrimeFactor(a),minPrimeFactor(b))*b;
            cout<<ans<<endl;
    }
    }
	return 0; 
} 
