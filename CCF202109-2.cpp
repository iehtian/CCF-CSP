#include<iostream>
#include<algorithm>
using namespace std;
int mi =1000000,judge=0;
int jianshu(int a[],int i,int res,int m){
    int k = res + a[i];
    if (k> m)
    {
        mi = min(mi, k);
        return mi;
    }
    else if (k==m)
    {
        mi = k;
        return mi;
    }
    else if (k<m)
    {
        if (i==0)
        {
            return mi;
        }
        jianshu(a, i - 1, k, m);
        jianshu(a, i-1, res, m);
    }
}
int main(){
    int n,m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int res = jianshu(a, n - 1, 0, m);
    cout << res;
}