#include<algorithm>
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a[8][8];
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j <8 ; j++)
        {
            cin >> a[i][j];
        }
    }
    int n;
    cin >> n;
    int m[8][8] = {0};
    int liang[64]={0};
    int T;
    cin >> T;
    for (int i = 0; i < n; i++)
    {
        cin >> liang[i];
    }
    int t = 0;
    int i = 0, j = 0;
    while (i<8&&j<8&&t<n)
    {
        m[i][j] = liang[t];
        t++;
        if (i==0&&j%2==0)
        {
            j++;
        }
        else if (i==0&&j%2==1)
        {
            i++;
            j--;
        }
        else if (j==0&&i%2==0)
        {
            i--;
            j++;
        }
        else if (j==0&&i%2==1)
        {
            if (i==7)
            {
                j++;
            }
            else{
                i++;
            }
        }
        else if (i==7&&j%2==0)
        {
            j++;
        }
        else if (i==7&&j%2==1)
        {
            i--;
            j++;
        }
        else if (j==7&&i%2==1)
        {
            i++;
            // j--;
        }
        else if (j==7&&i%2==0)
        {
            if (i==7)
            {
                break;
            }
            else{
                i++;
                j--;
            }
        }
        else if ((i+j)%2==0)
        {
            i--;
            j++;
        }
        else if ((i+j)%2==1)
        {
            i++;
            j--;
        }
    }
    if (T==0)
    {
        for (int i = 0; i < 8; i++)
        {
            cout << m[i][0];
            for (int j = 1; j < 8; j++)
            {
                cout << " " << m[i][j];
            }
            cout << endl;
        }
        return 0;
    }
    
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            m[i][j] = m[i][j] * a[i][j];
        }
    }
    if (T==1)
    {
        for (int i = 0; i < 8; i++)
        {
            cout << m[i][0];
            for (int j = 1; j < 8; j++)
            {
                cout << " " << m[i][j];
            }
            cout << endl;
        }
        return 0;
    }
    double tem=0;
    double dd[8][8];
    double pi = acos(-1);
    for (int i = 0; i < 8; i++)
    {
        for (int  j= 0; j < 8; j++)
        {
            tem = 0;
            for (int p = 0; p < 8; p++)
            {
                for (int q = 0; q < 8; q++)
                {
                    double x, y;
                    if (p==0)
                    {
                        x = sqrt(0.5);
                    }
                    else{
                        x= 1;
                    }
                    if (q==0)
                    {
                        y = sqrt(0.5);
                    }
                    else{
                        y = 1;
                    }
                    tem += x * y * (double)m[p][q] * cos((pi / 8) * ((double)i + 0.5) * (double)p) * cos(pi / 8 * ((double)j + 0.5) * (double)q);
                }
            }
            tem *= 0.25;
            dd[i][j] = tem + 128;
        }
    }
    int res[8][8];
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            res[i][j] = round(dd[i][j]);
            res[i][j] = max(0, res[i][j]);
            res[i][j] = min(255, res[i][j]);
        }
    }
    if (T==2)
    {
        for (int i = 0; i < 8; i++)
        {
            cout << res[i][0];
            for (int j = 1; j < 8; j++)
            {
                cout << " " << res[i][j];
            }
            cout << endl;
        }
    }
    
}