#include<bits/stdc++.h>
using namespace std;
int min_step(int arr[],int n)
{
  if(n==0 || arr[0]==0)
  return -1;
  int dp[n];
  dp[0]=0;
  for(int i=1;i<n;i++)
  {
    dp[i]=INT_MAX;
    for(int j=0;j<i;j++)
    {
      if(j+arr[j]>=i && dp[j]!=INT_MAX)
      {
        if(dp[j]+1<dp[i])
        dp[i]=dp[j]+1;
      }
    }
  }
  if(dp[n-1]!=INT_MAX)
  return dp[n-1];
  else
  return -1;
}
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++) cin>>arr[i];
  cout<<min_step(arr,n);
  return 0;

}
