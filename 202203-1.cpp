#include<algorithm>
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n, k;
    scanf("%d%d", &n, &k);
    int a[k] = {0}, b[1000000] = {0};
    int res = 0;
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        if (b[y]==0&&y!=0)
        {
            res++;
        }
        b[x] = 1;
    }
    printf("%d", res);
}