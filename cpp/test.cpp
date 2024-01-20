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
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    #endif

    vector<int> v;
    v.push_back(5);
    v.push_back(7);
    v.push_back(6);
    v.push_back(9);
    cout << "Hello World" << endl;
    for(auto i : v) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}