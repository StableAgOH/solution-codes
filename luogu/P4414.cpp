#include <iostream>
#include <chrono>
using namespace std;
//==========================================
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
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a, a+3);
    string s;
    cin>>s;
    for(auto i : s)
    {
        if(i=='A') cout<<a[0]<<' ';
        else if(i=='B') cout<<a[1]<<' ';
        else if(i=='C') cout<<a[2]<<' ';
    }
    //======================================
#ifdef LOCAL
    auto c2 = chrono::high_resolution_clock::now();
    cerr<<"Time Used:"<<chrono::duration_cast<chrono::milliseconds>(c2-c1).count()<<"ms"<<endl;
#endif
    return 0;
}
