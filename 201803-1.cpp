#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int res = 0;
    int tiao;
    cin >> tiao;
    int jishu = 1;
    for (int i = 0; tiao!=0; i++)
    {
        if (tiao==1)
        {
            jishu = 1;
        }
        else{
            if (jishu==1)
            {
                jishu = 2;
            }
            else{
                jishu += 2;
            }
        }
        res += jishu;
        cin >> tiao;
    }
    cout << res;
}