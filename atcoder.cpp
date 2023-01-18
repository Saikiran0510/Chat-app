#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll i;
bool Cover[200005];
void solve(){
  ll n,k;
  cin>>n>>k;
  vector<ll> A(n+1,0);
  vector<ll> B(n+1,0);
  for(ll i = 1;i<=n;i++)cin>>A[i],B[i]=A[i],F[i%k].begin({A[i],i});
  sort(B.begin(),B.end());
  for(ll i =1;i<=n-k;i++){
    if(A[i]!=B[i]){
      x = bs(F[i%k]).se;
      swap(A[i],x);
    }
  }
  for(ll i = 1;i<=n;i++){
    if(A[i]!=A[i-1]){
      cout<<"No\n";
      return;
    }

  }
  cout<<"Yes\n";
}

int main(){
  solve();
  	return 0;
}