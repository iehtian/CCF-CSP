#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<string.h>
using namespace std;
int main(){
    int n, x;
    scanf("%d%d", &n, &x);
    int a[n+1],c[n+1];
    a[0] = 0;
    c[0] = 0;
    for (int i = 1; i < n+1; i++)
    {
        cin >> c[i];
    }
    memcpy(a, c, (n+1)*sizeof(int));
    int b[n + 1],res=0;
    unordered_map<int, int> mp;
    for (int i = 0; i < x; i++)
    {
        int *p = upper_bound(a, a + n + 1, i);
        mp[p - a-1]++;
        res += p - a - 1;
    }
    cout << res;
}