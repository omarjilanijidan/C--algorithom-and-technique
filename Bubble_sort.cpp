//-----------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------Bubble Sort--------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k=1;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n - k; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]= temp;
            }
        }
        k++;
    }
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
