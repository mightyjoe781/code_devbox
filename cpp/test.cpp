/* Standard Libraries and Macros */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
#define fi first
#define se second
#define FOR(i,n) for(int (i)=0;(i)<(n);++(i))
#define dbg(vari) cerr << #vari<< " = "<< (vari) <<endl;


/* Main */

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    #endif

    vector<int> v;
    v.push_back(5);
    v.push_back(7);
    v.push_back(6);
    v.push_back(9);
    int x; cin >> x;
    cout << x << endl;

    cout << "Hello World" << endl;

    for(auto i : v) {
        cout << i << " ";
    }

    cout << endl;

    vector<int> arr = {3,1,2,4};
    int MOD = 1e9 + 7;
    stack<int> st;
    long long ans = 0;
    
    for(int i = 0; i <= (int)arr.size(); i++) {
        while(!st.empty() && (i == (int)arr.size() || arr[st.top()] >= arr[i])) {
            int mid = st.top(); st.pop();
            int left = st.empty() ? -1 : st.top();
            int right = i;
            
            long cnt = (mid-left)*(right-mid) % MOD;
            ans += (cnt * arr[mid]) % MOD;
            ans %= MOD;
        }
        st.push(i);
    }
    cout << ans << endl;
    // return (int) ans;

    return 0;
}