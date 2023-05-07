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
    int n, m;

    scanf("%d%d", &n, &m);
    int a[n], c[n];
    c[0] = 1;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (i>0)
        {
            c[i] = c[i - 1] * a[i-1];
        }
    }
    vector<int> xiangcheng;
    xiangcheng.push_back(0);
    for (int i = 1; i < n; i++)
    {
        xiangcheng.push_back(m % c[i]);
        int res = (xiangcheng[i] - xiangcheng[i-1]) / c[i - 1];
        printf("%d ", res);
    }
    printf("%d", (m - xiangcheng[n - 1]) / c[n - 1]);
}