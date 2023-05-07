#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
struct project
{
    int pre, needday;
    vector<int> nex;
    int zuizao, zuiwan;
};

int main(){
    int day, num;
    scanf("%d%d", &day, &num);
    project pro[num];
    for (int i = 0; i < num; i++)
    {
        cin >> pro[i].pre;
        if (pro[i].pre!=0)
        {
            pro[pro[i].pre - 1].nex.push_back(i);
        }
    }
    int tag = 0;
    pro[0].zuizao = 1;
    for (int i = 0; i < num; i++)
    {
        cin >> pro[i].needday;
    }
    printf("1");
    if (pro[0].zuizao+pro[0].needday-1>day)
    {
        tag = 1;
    }
    for (int i = 1; i < num; i++)
    {
        if (pro[i].pre==0)
        {
            pro[i].zuizao = 1;
        }
        else{
            pro[i].zuizao = pro[pro[i].pre - 1].zuizao + pro[pro[i].pre - 1].needday;
        }
        if (pro[i].zuizao+pro[i].needday-1>day)
        {
            tag = 1;
        }
        printf(" %d", pro[i].zuizao);
    }
    if (tag==1)
    {
        return 0;
    }
    for (int i = 0; i < num; i++)
    {
        if (pro[i].nex.size()==0)
        {
            pro[i].zuiwan = day - pro[i].needday+1;
        }
    }
    for (int i = num-1; i >=0; i--)
    {
        if (pro[i].nex.size()==0)
        {
            continue;
        }
        else{
            int mi = 200;
            for (vector<int>::iterator it=pro[i].nex.begin(); it!=pro[i].nex.end(); it++)
            {
                mi = min(mi, pro[*it].zuiwan - pro[i].needday);
            }
            pro[i].zuiwan = mi;
        }
    }
    printf("\n%d", pro[0].zuiwan);
    for (int i = 1; i < num; i++)
    {
        printf(" %d", pro[i].zuiwan);
    }
}