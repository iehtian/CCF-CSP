#include<algorithm>
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ma, mi;
    ma = max(a[0], a[n - 1]);
    mi = min(a[0], a[n - 1]);
    double zhong;
    if (n%2==1)
    {
        /* code */
        zhong = a[n / 2];
    }
    else{
        zhong = (double)(a[n / 2 - 1] + a[n / 2]) / 2;
    }
    zhong = round(zhong * 10);
    zhong = zhong / 10;
    printf("%d ", ma);
    if (floor(zhong)==zhong)
    {
        printf("%.0f ", zhong);
    }
    else{
        printf("%.1f ", zhong);
    }
    printf("%d", mi);
}