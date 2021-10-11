#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"


void myfile() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
void print(vector<int> v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}

void subset(int* arr, vector<int> &v, int i, int n) {
	if (i == n) {
		if (v.size() > 0)
			print(v);
		return;
	}

	v.push_back(arr[i]);
	subset(arr, v, i + 1, n);
	v.pop_back();
	subset(arr, v, i + 1, n);
}


int main() {
	myfile();
	int n;
	cin >> n;
	vector<int> v;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	subset(arr, v, 0, n);
	return 0;
}
