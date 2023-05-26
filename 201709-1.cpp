#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int n,res = 0;
    cin >> n;
    while (n>=50)
    {
        res += 7;
        n -= 50;
    }
    while (n>=30)
    {
        res += 4;
        n -= 30;
    }
    while (n!=0)
    {
        res += 1;
        n -= 10;
    }
    cout << res;
}