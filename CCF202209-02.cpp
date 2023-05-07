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
    int mi = 10000000;
    int book[n], buy[n][n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &book[i]);
        if (book[i]==m)
        {
            printf("%d", mi);
            return 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            
        }
    }
    printf("%d", mi);
}