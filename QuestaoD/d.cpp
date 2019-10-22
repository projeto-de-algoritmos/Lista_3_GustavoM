#include<bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
using ll = long long;

const int neutral = 0;
#define comp(a, b) ((a)+(b))
class BITree {
	private:
		vector<ll> ft;
	public:
		BITree(int n) { ft.assign(n+1, 0); }
		ll rsq(int i){
			ll sum = neutral;
			for(; i; i-= (i&-i))
				sum = comp(sum, ft[i]);
			return sum;
		}
		ll rsq(int i, int j){
			return rsq(j)-rsq(i-1);
		}
		void update(int i, ll v){
			for(; i<(int) ft.size(); i+= (i&-i))
				ft[i] = comp(v, ft[i]);
		}
};

int main(){
	ios::sync_with_stdio(0);
	ll n;
	cin >> n;
	BITree bt(n);
	for(int i=0; i<=n; ++i) bt.update(i+1, i);
	vector<ll> vs(n);
	for(int i=0; i<n; ++i) cin>>vs[i];
	reverse(all(vs));
	vector<ll> ans(n);
	for(int i=0; i<n; ++i){
		int l=1, r=n+1;
		while(r-l>1){
			int k = l+(r-l)/2;
			ll sum = bt.rsq(1, k);
			if(sum>vs[i]) r=k;
			else l=k;
		}
		ans[i]=l;
		bt.update(l+1, -l);
	}
	reverse(all(ans));
	for(int i=0; i<n; ++i)
		cout << ans[i] << (i==n-1?'\n':' ');
}
