#include<algorithm>
#include<iostream>
#include<unordered_set>
#include<unordered_map>
#include<set>
using namespace std;
int feiling(int a[],int k,int n,int i){
    if (n-k==1&&a[k]!=0)
    {
        if (a[k]==i)
        {
            a[k] = 0;
        }
        return 1;
    }
    else if (n-k==1&&a[k]==0)
    {
        return 0;
    }
    if ((n-k)%2==1)
    {
        if (a[(k+n)/2]!=0&&a[(k+n)/2-1]!=0&&a[(k+n)/2+1]!=0)
        {
            if (a[(k+n)/2]==i)
            {
                a[(k+n) / 2] = 0;
            }
            return feiling(a, k, (k+n) / 2,i) + feiling(a, (k+n) / 2+1, n,i) - 1;
        }
        else if (a[(k+n)/2]!=0&&a[(k+n)/2-1]==0&&a[(k+n)/2+1]==0)
        {
            if (a[(k+n)/2]==i)
            {
                a[(k+n) / 2] = 0;
            }
            return feiling(a, k, (k+n) / 2,i) + feiling(a, (k+n) / 2+1, n,i) + 1;
        }
        else {
            if (a[(k+n)/2]==i)
            {
                a[(k+n) / 2] = 0;
            }
            return feiling(a, k, (k+n) / 2,i) + feiling(a, (k+n) / 2+1, n,i);
        }
    }
    else{
        if (a[(k+n)/2-1]!=0&&a[(k+n)/2]!=0)
        {
            return feiling(a, k, (k+n) / 2,i) + feiling(a, (k+n) / 2, n,i)-1;
        }
        else{
            return feiling(a, k, (k+n) / 2,i) + feiling(a, (k+n) / 2, n,i);
        }
    }
}
int main(){
    int n;
    cin >> n;
    int ma = -1;
    int a[n],b[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        b[i] = a[i];
        // ma = max(ma, a[i]);
    }
    sort(b, b + n);
    int siz = unique(b, b + n) - b;
    // if (ma==0)
    // {
    //     printf("0");
    //     return 0;
    // }
    int mm = 0;
    for (int i = 0; i < siz;i++)
    {
        int con = 0;
        for (int j = 0; j < n-1; j++)
        {
            if (a[j]!=0&&a[j+1]==0)
            {
                con++;
            }
            if (a[j]==b[i])
            {
                a[j] = 0;
            }
            
        }
        if (a[n-2]==0&&a[n-1]!=0)
            {
                con++;
            }
            if (a[n-1]==b[i])
            {
                a[n-1] = 0;
            }
            mm = max(mm, con);
    }
    cout << mm;
}