#include<bits/stdc++.h>
using namespace std;
int find_duplicate(vector<int> &v,int n)
{
  int slow=v[0];
  int fast=v[0];
  do{
    slow=v[slow];
    fast=v[v[fast]];
  }while(slow!=fast);
  fast=v[0];
  while(slow!=fast)
  {
    slow=v[slow];
    fast=v[fast];
  }
  return slow;
}
int main()
{
  int n;
  cin>>n;
  vector<int> v(n);

  for(int i=0;i<n;++i)
  {
    cin>>v[i];
  }
  cout<<find_duplicate(v,n);
  return 0;
}
