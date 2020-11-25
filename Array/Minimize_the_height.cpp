#include<bits/stdc++.h>
using namespace std;
int getMin(int arr[], int n, int k)
{
     if(n == 1)
         return 0;
      sort(arr, arr+n);
      int small = arr[0] + k;
      int big = arr[n-1] - k;
      if (small > big)
         swap(small, big);
      int ans = arr[n-1] - arr[0];
      for (int i=1;i<n-1;i++)
      {
          int subtract = arr[i] - k;
          int add = arr[i] + k;
          if ((subtract >= small) || (add <= big))
              continue;

          if ((big - subtract) <= (add - small))
              small = subtract;
          else
          {
            big=add;
          }

      }
     return abs(min(ans, big-small));
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,k;
    cin>>k>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<getMin(arr,n,k);
  }
  return 0;
}
