#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[129],r;
	cin>>n;
	for(int i=1;i<=n;i++)
    	cin>>a[i];
    sort(a+1,a+n+1);
  	r=a[n];
    for(int i=1;i<=n;i++)
		if(r%a[i]==0 && a[i+1]!=a[i])
        	a[i]=0;
  sort(a+1,a+n);
  cout<<r<<" "<<a[n-1];
}