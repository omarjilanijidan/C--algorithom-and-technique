#include<bits/stdc++.h>
using namespace std;
int jidan(int n,int x,int y)
{


    int count1=0,count2=0,count3=0,count4=0,total=0;

    for(int i=x+1 , j=y+1 ; i>x && i<=n && j>y && j<=n ; i++,j++)
    {
        count1++;
    }

    for(int i=x-1 , j=y-1;i<x && i>=1 && j<y && j>=1 ; i--,j-- )
    {
        count2++;
    }

    for(int i=x-1 , j=y+1; i<=x && i>=1 && j>=1 && j<=n ; i--,j++)
    {
        count3++;
    }


    for(int i = x+1 , j=y-1; i>=x && i<=n && j<=y && j>=1  ; i++,j-- )
        count4++;


    total = count1+count2+count3+count4;
    total = total + ((n*2)-2);
    return total;


}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y;

        cin>>n>>x>>y;
        cout<<jidan(n,x,y)<<endl;

    }
    return 0;

}
