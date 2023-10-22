#include<iostream>
#include<algorithm>
#include<iomanip>
#include<string>
#include<cmath>
using namespace std;
int main() {
	int x, y, z;
	cin >> x;
	while (x--) {
		string n, m;
		bool flag = 0;
		int count = 0;
		cin >> y >> z;
		cin >> n >> m;
		for (int i = 0;i <= 10;i++) {
			if (n.find(m)!=-1) {
				flag = 1;
				break;
			}
			n += n;
			count++;
		}
		if (flag) {
			cout << count << "\n";
		}
		else {
			cout << "-1\n";
		}
	}
}
