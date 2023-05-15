#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int n;
    int tem1, tem2;
    int res=0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tem1 >> tem2;
        res += tem1 * tem2;
    }
    res = max(res, 0);
    cout << res;
}