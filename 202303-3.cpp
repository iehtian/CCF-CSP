#include<algorithm>
#include<iostream>
#include<map>
#include<queue>
#include<set>
using namespace std;
void jisuan(map<int,map<int,int> mp,int first,int second,set<int> se){

}
int main(){
    int n;
    cin >> n;
    // int a[500][500];
    map < int, map<int, int>> mp;
    for (int i = 0; i < n; i++)
    {
        int dn, num;
        cin >> dn >> num;
        map<int, int> mpp;
        for (int j = 0; j < num; j++)
        {
            int tem1, tem2;
            cin >> tem1 >> tem2;
            mpp[tem1] = tem2;
        }
        mp[dn] = mpp;
    }
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;    
        int site;
        site = s.find_first_of(":~");
        int tag = 0;
        if (s[site]=='~')
        {
            tag = 1;
        }
        queue<int> q;
        int first = stoi(s.substr(0, site)), second = stoi(s.substr(site + 1, s.length() - 1 - site));
        for (map<int,map<int,int>>::iterator it = mp.begin(); it!=mp.end(); it++)
        {
            if (it->second.find(first)!=it->second.end())
            {
                if (it->second[first]==second)
                {
                    if (tag==0)
                    {
                        q.push(it->first);
                    }
                }
                else{
                    if (tag==1)
                    {
                        q.push(it->first);
                    }
                }
            }
        }
        if (q.size()==0)
        {
            cout << endl;
            // continue;
        }
        else{
            cout << q.front();
            q.pop();
            while (q.empty()==false)
            {
                cout << " " << q.front();
                q.pop();
            }
            cout << endl;
        }
    }
}