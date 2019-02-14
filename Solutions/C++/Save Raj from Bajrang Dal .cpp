#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,sum=0;
    cin>>n;          // n is number of dishes in the Hotel // input taken from the user
    long long int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];  // input taken from user //dishes price
    }
    sort(a,a+n);    //sort an array //according to prices
    for(i=0;i<n/2;i++)
    {
        int s=a[i]+a[n-1-i];    //add the i th and n-i-1 th value of sorted array
        sum+=(s*s);             //sum according to the given equation
        
    }
    cout<<sum;
}
