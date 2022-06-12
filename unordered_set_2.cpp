#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<string> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        s.insert(str);
    }
    for(string value : s)
    {
        cout<<value<<endl;
    }
}
