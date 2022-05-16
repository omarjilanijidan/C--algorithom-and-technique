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
    vector<pair<int,int>>a={{2,2},{3,3},{4,4}};
    jidan(a);

}
