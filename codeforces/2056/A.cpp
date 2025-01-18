// https://codeforces.com/contest/2056/problem/A
// https://codeforces.com/contest/2056/submission/301448080

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, m, peri;
	cin >> t;
	for (int tests=0; tests<t; tests++) {
		cin >> n >> m; // No. of operations and length of sqr
		peri=m*4*n;
		for (int oper=0; oper<n; oper++) {
			int xi, yi, common;
			cin >> xi >> yi;
			if (oper==0) {
				continue;
			}
			common = (m*m) - (xi*m);
			common = common - ((m-xi)*(yi));
			peri = peri - (((m-xi)*2)+((m-yi)*2)); // peri - peri of common part
			
		}
		cout << peri << endl;
	}
}