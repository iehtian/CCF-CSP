#include<algorithm>
#include<iostream>
#include<map>
#include<unordered_map>
#include<stack>
#include<queue>
#include<deque>
#include<string>
#include<string.h>
using namespace std;
int main(){
    vector<int> res;
    map<string,int> mp;
    int n;
    cin>>n;
    string s;
    for (int i = 0; i < 8*n; i++)
    {
        string tem;
        cin>>tem;
        s+=tem;
        if (i%8==7)
        {
            mp[s]++;
            res.push_back(mp[s]);
            s.clear();
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<res[i]<<endl;
    }
}