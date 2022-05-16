#include<bits/stdc++.h>
using namespace std;
void jidan(vector<pair<int,int>>&a)
{
    for(int i=0 ; i<a.size();i++)
    {
        cout<<a[i].first<<"   "<<a[i].second<<endl;
    }
}
int main()
{
    vector<pair<int,int>>a;
    int n;
    cin>>n;
    for(int i=0; i<n ;i++)
    {
        int x,y;
        cin>>x>>y;
        a.push_back({x,y});
    }
    jidan(a);

}
