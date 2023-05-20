#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n+1];
    for (int i = 1; i < n+1; i++)
    {
        cin >> a[i];
    }
    a[0] = 0;
    int d[1000000] = {0};
    for (int i = 1; i < n+1; i++)
    {
        if (a[i-1]<a[i])
        {
            d[a[i - 1]]++;
            d[a[i]]--;
        }
    }
    int res = -1;
    res = max(res, d[0]);
    for (int i = 1; i < 1000000; i++)
    {
        d[i] += d[i - 1];
        res = max(res, d[i]);
    }
    cout << res;
}