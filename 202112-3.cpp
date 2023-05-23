#include<algorithm>
#include<iostream>
#include<string>
#include<vector>
#include<deque>
#include<math.h>
#include<map>
using namespace std;
int main(){
    string s;
    int n, k;
    cin >> n >> k >> s;
    vector<int> v;
    if (s[0]>='A'&&s[0]<='Z')
    {
        v.push_back(s[0] - 65);
    }
    else if (s[0] >='a'&&s[0]<='z')
    {
        v.push_back(27);
        v.push_back(s[0] - 97);
    }
    else if (s[0]>='0'&&s[0]<='9')
    {
        v.push_back(28);
        v.push_back(s[0] - 48);
    }
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i-1]>='A'&&s[i-1]<='Z'&&s[i]>='A'&&s[i]<='Z')
        {
            v.push_back(s[i] - 65);
        }
        else if (s[i-1]>='A'&&s[i-1]<='Z'&&s[i]>='a'&&s[i]<='z')
        {
            v.push_back(27);
            v.push_back(s[i] - 97);
        }
        else if (s[i-1]>='A'&&s[i-1]<='Z'&&s[i]>='0'&&s[i]<='9')
        {
            v.push_back(28);
            v.push_back(s[i] - 48);
        }
        else if (s[i-1]>='a'&&s[i-1]<='z'&&s[i]>='A'&&s[i]<='Z')
        {
            v.push_back(28);
            v.push_back(28);
            v.push_back(s[i] - 65);
        }
        else if (s[i-1]>='a'&&s[i-1]<='z'&&s[i]>='a'&&s[i]<='z')
        {
            v.push_back(s[i] - 97);
        }
        else if (s[i-1]>='a'&&s[i-1]<='z'&&s[i]>='0'&&s[i]<='9')
        {
            v.push_back(28);
            v.push_back(s[i] - 48);
        }
        else if (s[i-1]>='0'&&s[i-1]<='9'&&s[i]>='A'&&s[i]<='Z')
        {
            v.push_back(28);
            v.push_back(s[i] - 65);
        }
        else if (s[i-1]>='0'&&s[i-1]<='9'&&s[i]>='a'&&s[i]<='z')
        {
            v.push_back(27);
            v.push_back(s[i] - 97);
        }
        else if (s[i-1]>='0'&&s[i-1]<='9'&&s[i]>='0'&&s[i]<='9')
        {
            v.push_back(s[i] - 48);
        }
    }
    if (v.size()%2==1)
    {
        v.push_back(29);
    }
    deque<int> res;
    for (int i = 0; i < v.size(); i+=2)
    {
        res.push_back(30 * v[i] + v[i + 1]);
    }
    if (k==-1)
    {
        if ((res.size()+1)%n!=0)
    {
        int tem = ((res.size() + 1) / n);
        tem++;
        tem *= n;
        res.push_front(tem);
    }
    else{
        res.push_front(res.size() + 1);
    }
    while (res.size()%n!=0)
    {
        res.push_back(900);
    }
        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i] << endl;
        }
        return 0;
    }
    while ((res.size()+(int)pow((double)2,(double)k+1)+1)%n!=0)
    {
        res.push_back(900);
    }
    res.push_front(res.size() + 1);
    k = (int)(pow(2, (double)k + 1));
    vector<int> v;
    
}