#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    int sum = 0, a[n],ma=-1;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        ma = max(ma, a[i]);
    }
    if (ma==0)
    {
        printf("0");
        return 0;
    }
    int s = 0;
    while (s<ma)
    {
        int con = 0;
        if (a[0]!=0&&a[1]==0)
        {
            con++;
        }
        if (a[0]==s)
        {
            a[0] = 0;
        }
        
        for (int i = 1; i < n-1;i++ )
        {
            if(a[i]==0&&a[i+1]!=0){
                con++;
            }
            if (a[i]==s)
            {
                a[i] = 0;
            } 
        }
        // if (a[n-1]!=0&&a[n-2]==0)
        // {
        //     con++;
        // }
        if (con==0)
        {
            con++;
        }
        sum = max(sum, con);

        s++;
    }
    cout << sum;
    // system("pause");
}