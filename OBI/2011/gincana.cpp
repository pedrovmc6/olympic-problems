#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e3+10;

int n,m,a,b,contador;
int vis[maxn];
vector<int> v[maxn];

void dfs(int x){

	for(int i = 0; i < (int)v[x].size() ; ++i){
		int u = v[x][i];
		if(vis[u]==-1){
			vis[u]=0;
			dfs(u);
		}
	}

}

int main(){
	
	cin >> n >> m;

	for(int i = 1; i <= n; ++i)vis[i]=-1;

	for(int i = 1; i <= m; ++i){
		cin >> a >> b;

		v[a].push_back(b);
		v[b].push_back(a);
	}

	for(int i = 1; i <= n ; ++i){
		if(vis[i]==-1){
			contador++;
			dfs(i);
			vis[i]=0;
		}
	}

	cout<<contador<<"\n";

	return 0;
}
