#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int a[n] = {0};
    int tem = 0;
    int site, time;
    for (int i = 0; i < m; i++)
    {
        int sitenum;
        cin >> sitenum;
        for (int j = 0; j < sitenum; j++)
        {
            tem = site;
            cin >> site >> time;
            if (j==0)
            {
                a[site] = time;
            }
            else if (j!=sitenum-1)
            {
                a[site] = time + a[tem];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i==0)
        {
            continue;
        }
        
        if (a[i]==0)
        {
            printf("inf\n");
        }
        else{
            printf("%d\n", a[i]);
        }
    }
    
}