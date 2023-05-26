#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int res = 0;
    int cake = 0;
    int n,m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int tem;
        cin >> tem;
        cake += tem;
        if (cake>=m)
        {
            res++;
            cake = 0;
        }
    }
    if (cake!=0)
    {
        res++;
    }
    
    cout << res;
}