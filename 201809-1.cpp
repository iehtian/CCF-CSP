#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int b[n];
    b[0] = (a[0] + a[1]) / 2;
    b[n - 1] = (a[n - 1] + a[n - 2]) / 2;
    for (int i = 1; i < n-1; i++)
    {
        b[i] = (a[i - 1] + a[i] + a[i + 1]) / 3;
    }
    printf("%d", b[0]);
    for (int i = 1; i < n; i++)
    {
        printf(" %d", b[i]);
    }
}