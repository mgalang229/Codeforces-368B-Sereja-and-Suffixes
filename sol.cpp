#include <bits/stdc++.h>

using namespace std;

void test_case() {
	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	set<int> s;
	vector<int> distinct(n, 0);
	for(int i = n - 1; i >= 0; i--) {
		if(s.find(a[i]) == s.end()) {
			s.insert(a[i]);
			distinct[i] = (int) s.size();
		}
		else {
			distinct[i] = distinct[i+1];
		}
	}
	//for(int i = 0; i < n; i++) {
		//cout << distinct[i] << " ";
	//}
	//cout << "\n";
	for(int i = 0; i < m; i++) {
		int l;
		cin >> l;
		cout << distinct[l-1] << "\n";
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T = 1;
	//cin >> T;
	for(int tc = 0; tc < T; tc++) {
		test_case();
	}
}
