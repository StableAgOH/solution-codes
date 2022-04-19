#include <iostream>
#include <chrono>
using namespace std;
//==========================================
int a[10];
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
    int m,n;
    cin>>m>>n;
    for(int i=m;i<=n;i++)
    {
        int x = i;
        while(x)
        {
            a[x%10]++;
            x /= 10;
        }
    }
    for(int i=0;i<10;i++) cout<<a[i]<<' ';
    //======================================
#ifdef LOCAL
    auto c2 = chrono::high_resolution_clock::now();
    cerr<<"Time Used:"<<chrono::duration_cast<chrono::milliseconds>(c2-c1).count()<<"ms"<<endl;
#endif
    return 0;
}
