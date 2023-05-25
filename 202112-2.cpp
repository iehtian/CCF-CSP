#include<algorithm>
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    long long n, k;
    cin >> n >> k;
    n++;
    int a[n];
    a[0] = 0;
    for (long i = 1; i < n; i++)
    {
        cin >> a[i];
    }
    long long r = k / n;
    // int g[k];
    long long i = 0,con=0;
    // fill(g, g + r, 0);
    // for (i=2*r; i<k; i=i+r)
    // {
    //     fill(g + i - r, g + i, con);
    //     con++;
    // }
    // fill(g + i - r, g + k, con);
    // long long mp[k]={0};
    long long res = 0;
    for ( i = 0; i < k; i++)
    {
        int *p = upper_bound(a, a + n, i);
        int tem = p - a-1;
        // mp[abs(con - tem)]++;
        res += abs(con-tem);
        if (i%r==r-1)
        {
            con++;
        } 
    }
    // long long res = 0;
    // for (i = 0; i < k;i++)
    // {
    //     res += mp[i] * i;
    // }
    cout << res;
}