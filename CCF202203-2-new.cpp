#include<algorithm>
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int n, m, k;
    cin >> n >> m >> k;
    int a[n],b[n],c[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        b[i] = a[i] - b[i];
    }
    int t = 0;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        int time = x + k;
        int *p = lower_bound(a+t, a + n, time);
        int z = p - a;
        
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
        t = p - a;
        cout << res << endl;
    }
    
}