#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    int summax = 0, summin = 0;
    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; )
    {
        int *p = upper_bound(a+i, a + n, a[i]);
        int tem = p - a-i;
        summax += a[i] * tem;
        summin += a[i];
        i += tem;
    }
    cout << summax <<endl<< summin;
}