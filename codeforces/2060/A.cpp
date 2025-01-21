// https://codeforces.com/contest/2060/problem/A
// https://codeforces.com/contest/2060/submission/301767879

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; // test cases
	cin >> t;
	for (int test=0; test<t; test++) {
		int arr[4];
		for (int k=0; k<4; k++) {
			cin >> arr[k];
		}
		
		// Calculate fibonacciness
		int o1 = arr[0]+arr[1];
		int o2 = arr[2]-arr[1];
		int o3 = arr[3]-arr[2];
		
		if (o1==o2) {
			if (o2==o3) {
				cout << 3 << endl;
			} else {
				cout << 2 << endl;
			}
		} else if (o1==o3) {
			if (o3==o2) {
				cout << 3 << endl;
			} else {
				cout << 2 << endl;
			}
		} else if (o2==o3) {
			if (o3==o1) {
				cout << 3 << endl;
			} else {
				cout << 2 << endl;
			}
		} else {
			cout << 1 << endl;
		}
	}
}