#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int n, k, t, xl, yd, xr, yu;
    cin >> n >> k >> t >> xl >> yd >> xr >> yu;
    int con1 = 0, con2 = 0;
    for (int i = 0; i < n; i++)
    {
        int res = 0,lian=0,ma=0;
        for (int i = 0; i < t; i++)
        {
            int x, y;
            cin >> x >> y;
            if (x>=xl&&x<=xr&&y>=yd&&y<=yu)
            {
                res++;
                lian++;
            }
            else if (lian!=0)
            {
                ma = max(ma, lian);
                lian = 0;
            }
            
        }
        ma = max(ma, lian);
        if (res>=1)
        {
            con1++;
        }
        if (ma>=k)
        {
            con2++;
        }
    }
    cout << con1 << endl << con2;
}