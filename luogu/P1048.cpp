#include <iostream>
#include <ctime>
using namespace std;
//==========================================
const int maxn = 1e4+5;
const int maxw = 1e7+5;
typedef long long ll;
ll w[maxn], v[maxn];
ll dp[maxw];
signed main(signed argc, char const *argv[])
{
#ifdef LOCAL
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    clock_t c1 = clock();
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //======================================
    int n, W;
    cin>>W>>n;
    for(int i=1;i<=n;i++)
        cin>>w[i]>>v[i];
    for(int i=1;i<=n;i++)
        for(int j=W;j>=w[i];j--)
            dp[j]=max(dp[j-w[i]]+v[i], dp[j]);
    cout<<dp[W]<<endl;
    //======================================
#ifdef LOCAL
    cerr << "Time Used:" << clock() - c1 << "ms" << endl;
#endif
    return 0;
}
