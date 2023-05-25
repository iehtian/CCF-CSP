#include<algorithm>
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    double num[n];
    double su = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &num[i]);
        su += num[i];
    }
    double ave = su / (double)n;
    double d = 0;
    for (int i = 0; i < n; i++)
    {
        d += pow(num[i] - ave,2);
    }
    d = d / (double)n;
    d = sqrt(d);
    for (int i = 0; i < n; i++)
    {
        printf("%lf\n", (num[i] - ave) / d);
    }
    
}