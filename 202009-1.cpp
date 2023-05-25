#include<algorithm>
#include<iostream>
#include<math.h>
using namespace std;
struct dian
{
    int xu;
    double distance;
};
bool cmp(dian d1,dian d2){
    if (d1.distance>d2.distance)
    {
        return false;
    }
    else if (d1.distance==d2.distance)
    {
        if (d1.xu>d2.xu)
        {
            return false;
        }
        else{
            return true;
        }
    }
    else {
        return true;
    }
}
int main(){
    int n;
    double x, y;
    cin >> n >> x >> y;
    dian d[n];
    double tem1, tem2;
    for (int i = 0; i < n; i++)
    {
        cin >> tem1 >> tem2;
        d[i].xu = i + 1;
        d[i].distance = pow((tem1 - x), 2) + pow((tem2 - y), 2);
    }
    sort(d, d + n, cmp);
    printf("%d\n%d\n%d\n", d[0].xu, d[1].xu, d[2].xu);
}