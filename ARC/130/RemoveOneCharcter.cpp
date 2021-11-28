#include<bits/stdc++.h>
#define FOR(i,n) for(int i = 0;i<(n);i++)
using namespace std;
using ll = long long int;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    ll n,ans = 0;
    string a;
    cin >> n >> a;
    FOR(i,n-1){
        if(a[i] == a[i+1]){
            int cnt = 1;
            while(i<n+1 && a[i] == a[i+1]){i++;cnt++;}
            ans += (cnt*(cnt-1))/2;
        }
    }
    cout << ans << '\n';
    return 0;
}