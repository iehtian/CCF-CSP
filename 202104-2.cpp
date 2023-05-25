#include<algorithm>
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int n, l, r, t;
    cin >> n >> l >> r >> t;
    n++;
    int sum[n][n];
    memset(sum, 0, sizeof(sum));
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            cin >> sum[i][j];
        }
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            sum[i][j] += sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1];
        }
    }
    int con = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            int x1 = max(1, i - r), y1 = max(1, j - r), x2 = min(n - 1, i + r), y2 = min(n - 1, j + r);
            if (((double)(sum[x2][y2]-sum[x1-1][y2]-sum[x2][y1-1]+sum[x1-1][y1-1])/(double)((x2-x1+1)*(y2-y1+1)))<=(double)t)
            {
                con++;
            }
        }
    }
    cout << con;
}