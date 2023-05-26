#include<algorithm>
#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int, int> mp;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int tem;
        cin >> tem;
        mp[tem]++;
    }
    int res = -1,time=-1;
    for (map<int,int>::iterator it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second>time)
        {
            res = it->first;
            time = it->second;
        }
        
    }
    cout << res;
}