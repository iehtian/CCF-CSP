#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[2 * n], b[2 * n];
    for (int i = 0; i < 2*n; i+=2)
    {
        cin >> a[i] >> a[i + 1];
    }
    for (int i = 0; i < 2*n; i+=2)
    {
        cin >> b[i] >> b[i + 1];
    }
    long long res = 0;
    for (int i = 0; i < 2*n; i+=2)
    {
        for (int j = 0; j < 2*n; j++)
        {  
            if ((a[i]<=b[j]&&a[i+1]<=b[j])||(a[i]>=b[j+1]&&a[i+1]>=b[j+1]))
            {
                continue;
            }
            int ma = max(a[i], b[j]);
            int mi = min(a[i + 1], b[j + 1]);
            if (ma<mi)
            {
                res += mi - ma;
            }
        }
        
    }
    cout << res;
}