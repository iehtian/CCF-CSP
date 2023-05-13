#include<algorithm>
#include<iostream>
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
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        ma = max(ma, a[i]);
    }
    if (ma==0)
    {
        printf("0");
        return 0;
    }
    int mm = -1;
    for (int i = 0; i < ma; i++)
    {
        mm = max(mm, feiling(a, 0, n, i));
    }
    cout << mm;
}