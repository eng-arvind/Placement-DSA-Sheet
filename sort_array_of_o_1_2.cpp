#include<bits/stdc++.h>
using namespace std;
void sort_array(vector<int> &v,int n)
{
  int low=0;
  int mid=0;
  int high=n-1;
  while(mid<=high)
  {
    switch (v[mid]) {
      case 0:
              swap(v[low],v[mid]);
              low++;
              mid++;
              break;
      case 1:
              mid++;
              break;
      case 2:
              swap(v[mid],v[high]);
              high--;
              break;
    }
  }
}
int main()
{
  int n;
  cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;i++)
  cin>>v[i];
  sort_array(v,n);
  for(int i=0;i<n;i++)
  cout<<v[i]<<" ";
}
