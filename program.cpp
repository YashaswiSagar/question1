/Find the minimum absolute difference between any two array elements
/open input.txt for sample inputs and outputs
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    vector<int >v;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        v.push_back(a[i]);
    }
    int d=INT_MAX;
    for(int i=0;i<n-1;i++)
    {
        if(v[i+1]-v[i]<d)
        {
            d=v[i+1]-v[i];
        }
    }
    cout<<d<<endl;
    return 0;
}
