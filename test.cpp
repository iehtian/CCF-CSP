#include<iostream>
#include<set>
using namespace std;
const int N = 1e5 + 10;
int a[N],b[N]; 
int main()
{
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(3);
    set<int>::iterator it = st.begin();
    it++;
    st.erase(it);
    st.insert(5);
    st.insert(6);
}
