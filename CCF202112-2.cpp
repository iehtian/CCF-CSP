#include<algorithm>
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n, k;
    scanf("%d%d", &n, &k);
    n++;
    int a[n];
    a[0] = 0;
    for (int i = 1; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int r = k / n;
    int g[k];
    int i = 0,con=1;
    fill(g, g + r, 0);
    for (i=2*r; i<k; i=i+r)
    {
        fill(g + i - r, g + i, con);
        con++;
    }
    fill(g + i - r, g + k, con);
    unordered_map<int, int> mp;
    for ( i = 0; i < k; i++)
    {
        int *p = upper_bound(a, a + n, i);
        int tem = p - a-1;
        mp[abs(g[i] - tem)]++;
    }
    double res = 0;
    for (unordered_map<int,int>::iterator it = mp.begin(); it != mp.end(); it++)
    {
        res += (double)it->first * (double)it->second;
    }
    cout << res;
}