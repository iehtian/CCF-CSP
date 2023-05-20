#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int n, m, k;
    cin >> n >> m >> k;
    int a[n + 1], b[n + 1];
    a[0] = 0, b[0] = 0;
    for (int i = 1; i < n+1; i++)
    {
        cin >> a[i] >> b[i];
        a[i] -= k;
        b[i] = a[i] - b[i];
    }
    int d[1000000] = {0};
    for (int i = 1; i < n+1; i++)
    {
        if (a[i]>=0)
        {
            d[max(0,b[i]+1)]++;
            d[a[i] + 1]--;
        }
    }
    for (int i = 1; i < 1000000; i++)
    {
        d[i] += d[i - 1];
    }
    for (int i = 0; i < m; i++)
    {
        int tem;
        cin >> tem;
        cout << d[tem] << endl;
    }
}