#include<bits/stdc++.h>
using namespace std;
long long  merge_all(long long arr[],long long left,long long mid,long long right)
{
    long long cnt=0;
    long long n1=mid-left+1,n2=right-mid;
    long long L[n1],R[n1];
    for(long long i=0;i<n1;i++)
             L[i]=arr[left+i];
    for(long long j=0;j<n2;j++)
             R[j]=arr[mid+1+j];

    long long i=0,j=0,k=left;
      while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
            cnt+=(n1-i);
        }
        k++;
    }
    while (i < n1)
    {
        arr[k++] = L[i++];
    }
    while (j < n2)
    {
        arr[k++] = R[j++];
    }
  return cnt;

}
long long merge(long long arr[],long long left,long long right)
{
    long long mid,count=0;
    if(left<right)
    {
    mid=(left+right)/2;
    count+=merge(arr,left,mid);
    count+=merge(arr,mid+1,right);
    count+=merge_all(arr,left,mid,right);
    }
    return count;
}

long long int inversionCount(long long arr[], long long N)
{
    // Your Code Here
    return merge(arr,0,N-1);

}
int main()
{
  long long N;
  cin>>N;
  long long arr[N];
  for(long long i=0;i<N;i++) cin>>arr[i];
   cout<<inversionCount(arr,N);
   return 0;

}
