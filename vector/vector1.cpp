#include<bits/stdc++.h>
using namespace std;
void jidan(vector<int>a)
{
    for(int i=0;i<a.size();i++)
    {
        cout<<i<<". No Element is : "<<a[i]<<endl;
    }
    //cout<<endl;
}
int main()
{
    vector<int>a;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        a.push_back(x);
    }
    jidan(a);
    return 0;
}
