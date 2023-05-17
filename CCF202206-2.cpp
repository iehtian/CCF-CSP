#include<iostream>
#include<algorithm>
using namespace std;
struct shu
{
    int x=0, y=0;
};
bool cmp(shu s1,shu s2){
    if (s1.x>s2.x)
    {
        return false;
    }
    else if (s1.x==s2.x)
    {
        if (s1.y>s2.y)
        {
            return false;
        }
        else{
            return true;
        }
    }
    else {
        return true;
    }
}
int main(){
    int n,l,s;
    cin >> n >> l >> s;
    n++;
    shu sh[n];
    for (int i = 1; i < n; i++)
    {
        cin >> sh[i].x >> sh[i].y;
    }
    sort(sh, sh + n, cmp);
    int b1[n]={0}, b2[n]={0};
    for (int i = 1; i < n; i++)
    {
        b1[i] = sh[i].x - sh[i - 1].x;
        b2[i] = sh[i].y - sh[i - 1].y;
    }
    int a[s+1][s+1],coun=0,res=0;
    for (int i = s; i >=0 ; i--)
    {
        for (int j = 0; j < s+1; j++)
        {
            cin >> a[i][j];
            if (a[i][j]==1)
            {
                coun++;
            }
        }
    }
    for (int i = 1; i < n; i++)
    {
        int c1 = sh[i].x, c2 = sh[i].y;
        l = l - c1;
        b1[i] = b1[i] - c1;
        b2[i] = b2[i] - c2;
        for (int j = i; j < n; j++)
        {
            b1[j] += b1[j - 1];
            sh[j].x = b1[j];
            b2[j] += b2[j - 1];
            sh[j].y = b2[j];
        }
        for (int j = i; j < n; j++)
        {
            b1[j] = sh[j].x - sh[j - 1].x;
            b2[j] = sh[j].y - sh[j - 1].y;
        }
        int d = coun,tag=0;
        int j = i;
        while (j<n&&d>0&&tag==0)
        {
            if (sh[j].x>s||sh[j].y>s||l<s)
            {
                j++;
                tag = 1;
                break;
            }
            if (a[sh[j].x][sh[j].y]==1)
            {
                d--;
                j++;
                continue;
            }
            else{
                tag = 1;
                break;
            }
        }
        if (sh[j].x<s+1&&sh[j].y<s+1)
        {
            continue;
        }
        
        if (tag==0&&d==0)
        {
            res++;
        }
    }
    cout << res;
}