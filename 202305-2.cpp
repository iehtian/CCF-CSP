#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,d;
    cin>>n>>d;
    long long q[n][d],k[n][d],v[n][d];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < d; j++)
        {
            cin>>q[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < d; j++)
        {
            cin>>k[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < d; j++)
        {
            cin>>v[i][j];
        }
    }
    long long w[n];
    for (int i = 0; i < n; i++)
    {
        cin>>w[i];
    }
    for (int i = 0; i < n; i++)
    {
            long long qk[n]={0};
        for (int j = 0; j < n; j++)
        {
            for (int m = 0; m < d; m++)
            {
                qk[j]+=q[i][m]*k[j][m];
            }
        }
        for (int j = 0; j < n; j++)
        {
            qk[j]*=w[i];
        }
        for (int j = 0; j < d; j++)
        {
            long long res=0;
            for (int m = 0; m < n; m++)
            {
                res+=qk[m]*v[m][j];
            }
            cout <<res<<" ";
        }
        cout << endl;
    }
    
}