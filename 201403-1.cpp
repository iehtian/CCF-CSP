#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <n; j++)
        {
            if (a[i]+a[j]==0)
            {
                res++;
            }
            
        }
        
    }
    res = res / 2;
    cout << res;
}