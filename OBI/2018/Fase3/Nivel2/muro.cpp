#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e4+10 , mod = 1e9+7;

typedef long long int lli;

int d[] = {1,2,2,2,2,3,3};

int n,ans;
int dp[maxn];

int mureta(int x)
{
	if(x == 1 or x == 0) return 1;

	if(dp[x] != -1) return dp[x];

	dp[x] = 0;

	for(int i = 0 ; i < 7 ; ++i)
	{
		int a = x - d[i];
		if(a >= 0)
		{
			dp[x] += ((lli)mureta(a))%mod;
			dp[x] %= mod;
		}	
	}

	return dp[x];
}

int main()
{
	cin >> n;

	memset(dp,-1,sizeof(dp));

	cout << mureta(n) << "\n";

	return 0;
}
