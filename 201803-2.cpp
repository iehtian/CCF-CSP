#include<algorithm>
#include<iostream>
#include<map>
using namespace std;
int main(){
    int n, l, t;
    cin >> n >> l >> t;
    map<int,pair<int,int>> mp;
    for (size_t i = 0; i < n; i++)
    {
        int tem;
        cin >> tem;
        mp[i] = make_pair(tem,0);
    }
    for (int i = 0; i < t; i++)
    {
        for (map<int,pair<int,int>>::iterator it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second)
            {
                /* code */
            }
            
        }
        
    }
    
}