#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int n, m, l;
    cin >> n >> m >> l;
    int a[l] = {0};
    int tem;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> tem;
            a[tem]++;
        }
    }
    printf("%d", a[0]);
    for (int i = 1; i < l; i++)
    {
        printf(" %d", a[i]);
    }
    
}