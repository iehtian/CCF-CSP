#include<algorithm>
#include<iostream>
#include<unordered_map>
using namespace std;
struct kai
{
    int ti, ci;
};

bool cmp_value(const pair<int, int> left,const pair<int,int> right){
	return left.second < right.second;
}
int main(){
    int n, m, k;
    scanf("%d%d%d", &n, &m, &k);
    unordered_map<int, int> mp;
    int ma = -1;

    for (int i = 0; i < n; i++)
    {
        int tem1,tem2;
        scanf("%d%d", &tem1, &tem2);
        mp[tem1] += tem2;
        ma = max(tem1, ma);
    }
    int tem = 0;
    while(1)
    {
        tem = 0;
        if (ma<=k)
        {
            printf("%d", k);
            break;
        }
        else{
            mp[ma - 1] += mp[ma];
            tem = mp[ma];
            ma--;
            if (m<tem)
            {
                printf("%d", ma+1);
                break;
            }
            else{
                m = m - tem;
            }
            
        }
    }
}