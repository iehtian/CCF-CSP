#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int res = 10000000;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i==j)
            {
                continue;
            }
            if (abs(a[i]-a[j])<res)
            {
                res = abs(a[i] - a[j]);
            }
        }
        
    }
    cout << res;
}