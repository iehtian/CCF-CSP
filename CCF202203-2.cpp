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
    int t=0;
    int c[n];
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        int time = x + k;
        int *p = lower_bound(a+t, a + n, time);
        t = p - a;
        memcpy(c, b, sizeof(b));
        int con = 0;
        for (int j = p-a; j < n; j++)
        {
            if (time>c[j])
            {
                con++;
            }
        }
        cout << con << endl;
    }
    
}