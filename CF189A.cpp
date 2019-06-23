# include <bits/stdc++.h>
using namespace std;
int main(){
	int n, a, b, c;
	cin >> n >> a >> b >> c;
	int dp[n + 1];
	for (int i = 0; i < n + 1; i++) dp[i] = INT_MIN;
	dp[0] = 0;
	for (int i = 1; i <= n; i++){
		if (i >= a) dp[i] = max(dp[i], dp[i - a] + 1);
		if (i >= b) dp[i] = max(dp[i], dp[i - b] + 1);
		if (i >= c) dp[i] = max(dp[i], dp[i - c] + 1);
	}
	cout << dp[n];
}