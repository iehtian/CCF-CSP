#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm> 
#include<iostream>
#include<map>
#include<set>
#include <sstream>
#include<stack>
#include<queue>
#include<unordered_set>
#include<iomanip>
using namespace std;
int main(){
    int n,a, b;
    scanf("%d%d%d", &n, & a, &b);
    long long res = 0;
    for (int i = 0; i < n; i++)
    {
        int x1, y1,x2,y2;
        scanf("%d%d%d%d", &x1, &y1,&x2,&y2);
        if (y1>=b||y2<=0||x1>=a||x2<=0)
        {
            continue;
        }
            int xx = max(0, x1);
            int xxx = min(a, x2);
            int yy = max(0, y1);
            int yyy = min(b, y2);
            res += (xxx - xx) * (yyy - yy);
    }
    cout << res;
}