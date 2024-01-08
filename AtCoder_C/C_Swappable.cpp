//https://atcoder.jp/contests/abc206/tasks/abc206_c
#include<bits/stdc++.h>
using namespace std;
const int N = 3e5 + 9;
int arr[N];
int main() {
	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
    map <int,int> cnt; 
    long long int ans = 0;
	for (int j = 1; j <= n; j++) {
   		ans += j - 1 - cnt[arr[j]];
   		cnt[arr[j]]++;
	}
	cout << ans << endl;
	return 0;
}