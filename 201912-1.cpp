#include<algorithm>
#include<iostream>
using namespace std;
int time=0;
void is7(int i,int &who){
    if (i%7==0||to_string(i).find_first_of("7")!=-1)
        {
            who++;
        }
        else{
            time++;
        }
}
int main(){
    int n;
    cin >> n;
    int ca = 0, cb = 0, cc = 0, cd = 0;
    for (int i = 0; time < n; i++)
    {
        if (i%4==0)
        {
            is7(i+1, ca);
        }
        else if(i%4==1){
            is7(i+1, cb);
        }
        else if (i%4==2)
        {
            is7(i+1, cc);
        }
        else{
            is7(i+1, cd);
        }
    }
    cout << ca << endl
         << cb << endl
         << cc << endl
         << cd << endl;
}