#include<algorithm>
#include<iostream>
#include<stack>
#include<deque>
using namespace std;
int main(){
    int n;
    cin >> n;
    getchar();
    for (int i = 0; i < n; i++)
    {
        deque<char> st;
        deque<int> num;
        for (int j = 0; ; j++)
        {
            char c = getchar();
            if (c=='\n')
            {
                break;
            }
            if (c>='0'&&c<='9')
            {
                num.push_back(c - 48);
                continue;
            }
            if (c==120)
            {
                int a = num.back();
                num.pop_back();
                char nu = getchar() - 48;
                num.push_back(a * nu);
                continue;
            }
            else if (c=='/')
            {
                int a = num.back();
                num.pop_back();
                char nu = getchar() - 48;
                num.push_back(a / nu);
                continue;
            }
            st.push_back(c);
        }
        while (st.empty()!=true)
        {
            int a = num.front();
            num.pop_front();
            int b = num.front();
            num.pop_front();
            if (st.front()=='-')
            {
                num.push_front(a - b);
            }
            else{
                num.push_front(a + b);
            }
            st.pop_front();
        }
        if (num.front()==24)
        {
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    
}
