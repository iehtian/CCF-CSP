#include<algorithm>
#include<iostream>
#include<map>
#include<unordered_map>
#include<stack>
#include<queue>
#include<deque>
#include<string>
#include<string.h>
using namespace std;
int main(){
    int n,d;
    cin>>n>>d;
    int q[n][d],k[n][d],v[n][d];
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
    int w[n];
    for (int i = 0; i < n; i++)
    {
        cin>>w[i];
    }
    int ii=0,jj=0;
    int zhuanzhi[d][n];
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < n; j++)
        {
            zhuanzhi[ii][jj]=k[j][i];
            if (jj%n==n-1)
            {
                ii++;
                jj=0;
            }
            else{
                jj++;
            }
        }
    }
    long long qk[n][n],res[n][d];
    int iii=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            qk[i][j]=0;
            for (int jjj = 0; jjj < d; jjj++)
            {
                qk[i][j]+=q[i][jjj]*zhuanzhi[jjj][iii];
            }
            iii++;
            if (iii%n==0)
            {
                iii=0;
            }
        }
    }
    ii=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            qk[i][j]*=w[ii];
        }
        ii++;
    }
    iii=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < d; j++)
        {
            res[i][j]=0;
                for (int jjj = 0; jjj < n; jjj++)
                {
                    res[i][j]+=qk[i][jjj]*v[jjj][iii];
                }
                 iii++;
                if (iii%d==0)
                {
                    iii=0;
                }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < d; j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}