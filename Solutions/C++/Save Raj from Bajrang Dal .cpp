#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,sum=0;
    cin>>n;
    long long int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    {
        for(i=0;i<n/2;i++)
        {
            int s=a[i]+a[n-1-i];
            sum+=(s*s);
        }
    }
    cout<<sum;
}