#include<algorithm>
#include<iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<int, int> area,user;
    for (int i = 0; i < n; i++)
    {
        // for (map<int,int>::iterator it = area.begin(); it !=area.end(); it++)
        // {
            // it->second--;
        // }
        for (map<int,int>::iterator it = user.begin(); it != user.end(); it++)
        {
            it->second--;
        }
        int r, m;
        cin >> r >> m;
        for (int j = 0; j < r; j++)
        {
            int p;
            cin >> p;
            area[p] = 7 + i;
        }
        for (int j = 0; j < m; j++)
        {
            int d, u, r;
            cin >> d >> u >> r;
            if (area.find(r)!=area.end())
            {
                if (d>=area[r]-7&&d<area[r]&&i<area[r]&&i>=area[i]-7)
                {
                    user[u] = area[r]-i;
                }
            }
        }
        cout << i;
        for (map<int,int>::iterator it = user.begin(); it != user.end(); it++)
        {
            if (it->second>0)
            {
                cout << " " << it->first;
            }
        }
        cout << endl;
    }
}