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
const int maxnum=1e9;
struct shuju
{
    int shang, yu;
};

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
    // long long qk[n][n],res[n][d];
    shuju qkk[n][n];
    int iii=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // qk[i][j]=0;
            long long tem = 0;
            for (int jjj = 0; jjj < d; jjj++)
            {
                
                tem+=q[i][jjj]*zhuanzhi[jjj][iii];
            }
            qkk[i][j].shang = tem / maxnum;
            qkk[i][j].yu = tem % maxnum;
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
            long long tem = qkk[i][j].shang * maxnum + qkk[i][j].yu;
            // qk[i][j]*=w[ii];
            tem *= w[ii];
            qkk[i][j].shang = tem / maxnum;
            qkk[i][j].yu = tem % maxnum;
        }
        ii++;
    }
    iii=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < d; j++)
        {
            long long res = 0;
            for (int jjj = 0; jjj < n; jjj++)
            {
                long long tem = qkk[i][jjj].shang * maxnum + qkk[i][jjj].yu;
                res += tem * v[jjj][iii];
                
                }
                cout << res << " ";
                iii++;
                if (iii%d==0)
                {
                    iii=0;
                }
        }
        cout<<endl;
    }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < d; j++)
    //     {
    //         cout<<res[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}