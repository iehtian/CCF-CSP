#include<algorithm>
#include<iostream>
#include<map>
using namespace std;
int main(){
    long long n, k;
    cin >> n >> k;
    map<int, int> mp;
    int tem;
    for (int i = 0; i < n; i++)
    {
        cin >> tem;
        mp[tem] = i+1;
    }
    mp[0] = 0;
    mp[k - 1] = n;
    long long r = k / n;
    int g[k];
    long long i = 0,con=0;
    fill(g, g + r, 0);
    for (i=2*r; i<k; i=i+r)
    {
        fill(g + i - r, g + i, con);
        con++;
    }
    fill(g + i - r, g + k, con);
    long long res = 0;
    map<int, int>::iterator it = mp.begin();
    map<int, int>::iterator itt = it;
    it++;
    for ( ; itt!=mp.end(); )
    {
        if (itt->first-it->first<r)
        {
            if (it->first/r!=itt->first-1/r)
            {
                res += (abs(g[i] - it->second)) * (r - it->first % r);
                res += (abs(g[i] - itt->second)) * (itt->first % r + 1);
            }
            else{
                res += (abs(g[i] - it->second)) * (itt->first - it->first);
            }
        }
        else{//保证对齐
            if (it->first%r!=0)
            {
                res += (abs(g[i] - it->second)) * (r - it->first % r);
            }
            if (itt->first%r!=0)
            {
                res += (abs(g[i] - itt->second)) * (itt->first % r + 1);
            }
        }
    }
    cout << res;
}