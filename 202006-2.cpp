#include<algorithm>
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    long long n, m, q;
    cin >> n >> m >> q;
    long long res = 0;
    unordered_map<long long, long long> u, v;
    long long ma = -1000000;
    for (long long i = 0; i < m; i++)
    {
        long long a, b;
        cin >> a >> b;
        u[a] = b;
    }
    for (long long i = 0; i < q; i++)
    {
        long long a, b;
        cin >> a >> b;
        if (u.find(a)!=u.end())
        {
            res += u[a] * b;
        }
        v[a] = b;
    }
    // for (int i = 0; i < ma; i++)
    // {
    //     res += u[i] * v[i];
    // }
    cout << res;
}