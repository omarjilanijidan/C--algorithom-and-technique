#include<bits/stdc++.h>
using namespace std;
void jidan(vector<int>&a)
{
    for(int i=0;i<a.size();i++)
    {
        cout<<i<<". No Element is : "<<a[i]<<endl;
    }
    //cout<<endl;
}
int main()
{
    vector<int>a(5,3);

    a.push_back(10);
    jidan(a);

    a.pop_back(); // removing last element of the vector . which is 10
    jidan(a);

    vector<int>&a1=a; // passing actual vector

    return 0;
}
