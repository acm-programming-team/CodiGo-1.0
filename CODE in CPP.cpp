#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  string a[5];
  int i,c=0;
  for(i=0;i<5;i++)
  {
      cin>>a[i];
  }
  //cout<<s[1]<<s[0];
  for(i=0;i<5;i++)
  {
      if(a[i][0]==s[0]||a[i][1]==s[1])
      {
          cout<<"YES";
          c=1;
          break;
      }      
  }
  if(c==0)cout<<"NO";
}