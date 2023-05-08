#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int n, m, k;
    cin >> n >> m >> k;
    int a[n],b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        b[i] = a[i] - b[i];
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        int time = x + k;
        int *p = lower_bound(a, a + n, time);
        int z = p - a;
        int c[n];
        if (z==n)
        {
            cout << "0" << endl;
            continue;
        }
        memcpy(c, b, sizeof(b));
        sort(c + z, c + n);
        int *v = lower_bound(c + z, c + n, time);
        int res = (int)(v - c) - z;
        // for (int j = p-a; j < n; j++)
        // {
        //     if (time>a[j]-b[j])
        //     {
        //         con++;
        //     }
            
        // }
        // t = p - a;
        cout << res << endl;
    }
    
}