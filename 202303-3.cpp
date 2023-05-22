#include<algorithm>
#include<iostream>
#include<map>
#include<queue>
#include<set>
using namespace std;
void jisuan(map < int, map<int, int>> mp,set<int> &se,int first,int second,int tag,int tt){
    
    for (map<int,map<int,int>>::iterator it = mp.begin(); it!=mp.end(); it++)
    {
        if (it->second.find(first)!=it->second.end())
        {
            if (it->second[first]==second)
            {
                if (tag==0)
                {
                    se.insert(it->first);
                }
            }
            else{
                if (tag==1)
                {
                    se.insert(it->first);
                }
            }
        }
    }
}
bool qie(map < int, map<int, int>> mp,set<int> &se,vector<int> ff,vector<int> ss,vector<int> tag){
    vector<int> ve;
    for (set<int>::iterator it = se.begin(); it != se.end(); it++)
    {
        ve.push_back(*it);
    }
    se.clear();
    for (int i = 0; i < ve.size(); i++)
    {
        for (int j = 0; j < ff.size(); j++)
        {
            if (mp[ve[i]].find(ff[j])==mp[ve[i]].end())
            {
                ve[i] = -1;
                continue;
            }
            if (mp[ve[i]][ff[j]]==ss[j])
            {
                if (tag[j]==1)
                {
                    ve[i] = -1;
                }
            }
            else{
                if (tag[j]==0)
                {
                    ve[i] = -1;
                }
            }
        }
    }
    for (int i = 0; i < ve.size(); i++)
    {
        if (ve[i]>=0)
        {
            se.insert(ve[i]);
        }
    }
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
        set<int> se;  
        int site;
        int tt = 0;
        if (s[0]=='|')
        {
            tt = 1;
            s.erase(s.begin());
        }
        else if(s[0]=='&'){
            tt = 2;
            s.erase(s.begin());
        }
        vector<int> ff, ss,tagg;
        while (s.length()!=0)
        {
            int tag = 0;
            int leftbracket = s.find("(");
            int rightbracket = s.find(")");
            site = s.find_first_of(":~");
            if (leftbracket==-1)
            {
                if (s[site]=='~')
                {
                    tag = 1;
                }
                int first = stoi(s.substr(0, site));
                int second = stoi(s.substr(site + 1, s.length() - site - 1));
                jisuan(mp, se, first, second,tag,tt);
                break;
            }
            int first = stoi(s.substr(leftbracket+1,site-leftbracket));
            int second = stoi(s.substr(site + 1, rightbracket - site));
            if (s[site]=='~')
            {
                tag = 1;
            }
            s.erase(s.begin(), s.begin() + rightbracket + 1);
            ff.push_back(first);
            ss.push_back(second);
            tagg.push_back(tag);
            jisuan(mp, se, first, second,tag,tt);
            if (tt==2)
            {
                qie(mp, se, ff, ss, tagg);
            }
        }
        if (se.size()==0)
        {
            cout << endl;
            // continue;
        }
        else{
            set<int>::iterator it = se.begin();
            cout << *it;
            it++;
            for (; it != se.end(); it++)
            {
                cout << " " << *it;
            }
            cout << endl;
        }
    }
}