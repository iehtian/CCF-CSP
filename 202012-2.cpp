#include<algorithm>
#include<iostream>
#include<unordered_map>
#include<map>
#include<vector>
using namespace std;
typedef struct stu
{
    int y, gua;
};
typedef struct stu2
{
    int num1=0, num0=0;
};

bool cmp(stu s1,stu s2){
    return s1.y < s2.y;
}
int main(){
    int n;
    cin >> n;
    stu st[n];
    for (int i = 0; i < n; i++)
    {
        cin >> st[i].y >> st[i].gua;
    }
    sort(st, st + n, cmp);
    map<int, stu2> mp;
    for (int i = 0; i < n; i++)
    {
        if (st[i].gua==1)
        {
            mp[st[i].y].num1++;
        }else{
            mp[st[i].y].num0++;
        }
    }
    map<int, stu2>::iterator it = mp.begin();
    // it->second.num0 = 0;
    map<int, stu2>::iterator it2;
    it2 = it;
    it2++;
    int tem = 0,tem1=0;
    for ( ; it2 !=mp.end(); it++,it2++)
    {
        // tem = it2->second.num0;
        it2->second.num0 = it2->second.num0 + it->second.num0;
        
    }
    it = mp.begin();
    it2 = it;
    tem1 = it->second.num0;
    it2++;
    for (; it2 !=mp.end(); it++,it2++)
    {
        tem = it2->second.num0;
        it2->second.num0 = tem1;
        tem1 = tem;
    }
    it = mp.begin();
    it->second.num0 = 0;
    map<int, stu2>::reverse_iterator fanit = mp.rbegin();
    map<int, stu2>::reverse_iterator fanit2;
    fanit2 = fanit;
    fanit2++;
    for ( ; fanit2 !=mp.rend(); fanit2++,fanit++)
    {
        fanit2->second.num1 = fanit2->second.num1 + fanit->second.num1;
    }
    int res=-1,ress;
    for (it=mp.begin(); it != mp.end(); it++)
    {
        if (it->second.num0+it->second.num1>=res)
        {
            res = it->second.num0 + it->second.num1;
            ress = it->first;
        }
    }
    cout << ress;
    // system("pause");
}