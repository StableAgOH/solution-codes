#include <iostream>
#include <chrono>
using namespace std;
//==========================================
const int maxn = 105;
const int mod = 1e9+7;
typedef long long ll;
ll dp[maxn][maxn][maxn];
signed main(signed argc, char const *argv[])
{
#ifdef LOCAL
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    auto c1 = chrono::high_resolution_clock::now();
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //======================================
    int n,m;
    cin>>n>>m;
    dp[0][0][2] = 1;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<m;j++)
        {
            for(int k=0;k<=m-j;k++)
            {
                if(i&&!(k&1)) dp[i][j][k] += dp[i-1][j][k/2];
                if(j) dp[i][j][k] += dp[i][j-1][k+1];
                dp[i][j][k] %= mod;
            }
        }
    }
    cout<<dp[n][m-1][1]<<endl;
    //======================================
#ifdef LOCAL
    auto c2 = chrono::high_resolution_clock::now();
    cerr<<"Time Used:"<<chrono::duration_cast<chrono::milliseconds>(c2-c1).count()<<"ms"<<endl;
#endif
    return 0;
}
