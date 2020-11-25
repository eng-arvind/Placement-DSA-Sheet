#include<bits/stdc++.h>
using namespace std;
void punion(int a[],int b[],int n,int m)
{
  int i=0,j=0;
  while(i<n && j<m)
  {
    if(a[i]<b[j])
    {
      cout<<a[i]<<" ";
      i++;
    }
    else if(a[i]>b[j])
    {
    cout<<b[j]<<" ";
    j++;
     }
      else if(a[i]==b[j])
      {
        cout<<a[i]<<" ";
        i++;
        j++;
        }
     }
     if(i!=n)
     {
       for(;i<n;i++)
       cout<<a[i]<<" ";
     }
     if(j!=m)
     {
       for(;j<m;j++)
       cout<<b[j]<<" ";
     }
     cout<<endl;
}
void pintersection(int a[],int b[],int n,int m)
{
  int i=0,j=0;
  while(i<n && j<m)
  {
    if(a[i]<b[j])
    i++;
    else if(a[i]>b[j])
    j++;
    else if(a[i]==b[j])
    {
      cout<<a[i]<<" ";
      i++;
      j++;
    }
  }
  cout<<endl;
}
int main()
{
  int n,m;
  cin>>n>>m;
  int a[n],b[m];
  for(int i=0;i<n;i++)
  cin>>a[i];
  for(int i=0;i<m;i++)
  cin>>b[i];
  punion(a,b,n,m);
 pintersection(a,b,n,m);
  return 0;
}
