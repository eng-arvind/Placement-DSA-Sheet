#include<bits/stdc++.h>
using namespace std;
void solve(int n,int a[])
{
  int i=0,j=0;
  while(j<n)
  {
    if(a[j]>0)
    j++;
    else if(a[j]<0)
    {
      swap(a[i],a[j]);
      i++;
      j++;
    }
  }
  for(int i=0;i<n;i++)
  cout<<a[i]<<" ";
}
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  solve(n,a);
  return 0;
}
