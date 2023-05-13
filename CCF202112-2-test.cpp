#include<algorithm>
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n, N;
    cin >> n >> N;
    n ++;
    int r = N / n;
    unordered_map<int, int> mp;
    mp[0] = 0;
    for (int i = 0; i < n; i++)
    {
        int tem;
        cin >> tem;
        mp[tem] = i;
    }
    mp[N - 1] = n;
    long long res = 0;
    unordered_map<int, int>::iterator pre = mp.begin();
    unordered_map<int, int>::iterator nex=pre;
    nex++;
    for (int i = 0; i < N-r; i+=r)
    {
        if (i==pre->second&&nex->first-pre->first==r)
        {
            continue;
        }
        else if (i==pre->second&&nex->first-pre->first>r)
        {
            
        }
        
    }
    
}