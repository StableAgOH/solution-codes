#include <iostream>
#include <chrono>
using namespace std;
//==========================================
#include <vector>
typedef long long ll;
signed main(signed argc, char const *argv[])
{
#if defined(LOCAL) || defined(DEBUG)
    freopen("in.in", "r", stdin);
#ifndef DEBUG
    freopen("out.out", "w", stdout);
    auto c1 = chrono::high_resolution_clock::now();
#endif
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //======================================
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> v(n+1);
        for(int i=1;i<=n;i++) cin>>v[i];
        ll sum = 0;
        for(int i=1;i<=k;i++)
        {
            int mx = 0;
            for(int j=0;i+j<=n;j+=k)
                mx = max(mx, v[i+j]);
            sum += mx;
        }
        cout<<sum<<endl;
    }
    //======================================
#ifdef LOCAL
    auto c2 = chrono::high_resolution_clock::now();
    cerr<<"Time Used:"<<chrono::duration_cast<chrono::milliseconds>(c2-c1).count()<<"ms"<<endl;
#endif
    return 0;
}