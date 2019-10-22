#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		int max_blow=0;
		int max_damage= 0;
		for(int i=0; i<n; ++i){
			int d, h;
			cin >> d >> h;
			if(d>h) max_blow = max(max_blow, d-h);
			max_damage = max(max_damage, d);
		}
		int ans = 1;
		x-=max_damage;
		if(x>0 and max_blow==0){
			cout << -1 << endl;
			continue;
		}
		else if(x>0){
			ans +=ceil(x/(double)max_blow);
		}
		cout << ans << endl;
	}
}
