#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;
int main(){
    int n, x;
    scanf("%d%d", &n, &x);
    int a[n+1];
    a[0] = 0;
    for (int i = 1; i < n+1; i++)
    {
        cin >> a[i];
    }
    int b[n + 1];
    unordered_map<int, int> mp;
    for (int i = 0; i < x; i++)
    {
        int *p = upper_bound(a, a + n + 1, i);
        mp[p - a-1]++;
    }
    // system("pause");
    int res = 0;
    for (unordered_map<int,int>::iterator it = mp.begin(); it != mp.end(); it++)
    {
        res += it->first * it->second;
    }
    cout << res;
}