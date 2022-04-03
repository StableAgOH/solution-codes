#include <iostream>
#include <ctime>
using namespace std;
//==========================================
#include <vector>
#include <algorithm>
#include <iterator>
vector<int> v;
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
    int n;
    cin>>n;
    copy_n(istream_iterator<int>(cin), n, inserter(v, v.begin()));
    int sum = 0;
    for(auto it=v.begin(); it!=v.end(); ++it)
        cout<<count_if(v.begin(), it, [&it](int x) { return x<*it; })<<' ';
    //======================================
#ifdef LOCAL
    cerr << "Time Used:" << clock() - c1 << "ms" << endl;
#endif
    return 0;
}
