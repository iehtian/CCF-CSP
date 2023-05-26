#include<algorithm>
#include<iostream>
#include<unordered_map>

using namespace std;
int main(){
    int n;
    cin >> n;
    unordered_map<int, unordered_map<int,int>> mp;
    for (int i = 0; i < n; i++)
    {
        int c, b;
        cin >> c >> b;
        mp[c][b] = 1;
    }
    for (unordered_map<int,unordered_map<int,int>>::iterator it = mp.begin(); it != mp.end(); it++)
    {
        if (mp[it->first].f)
        {
            /* code */
        }
        
    }
    
}