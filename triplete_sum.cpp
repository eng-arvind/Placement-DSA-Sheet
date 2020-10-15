#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
	int countTriplet(int arr[], int n)
	{
	    // Your code goes here


      
//worst approach
	    int cnt=0;
	    sort(arr,arr+n);
	    if(n<3)
	    return 0;
	    map<int,int> st;
	    for(int i=0;i<n-1;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        st[arr[i]+arr[j]]++;
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(st.find(arr[i])!=st.end())
	        cnt+=st[arr[i]];
	    }
	    return cnt;



    //best approach




	    sort(arr, arr + n);
	    int cnt=0;
    for(int i = n - 1; i >= 0; i--)
    {
        int j = 0;
        int k = i - 1;
        while (j < k)
        {
            if (arr[i] == arr[j] + arr[k])
            {
                cnt++;
                j++;
                k++;
            }

            else if (arr[i] > arr[j] + arr[k])
                j += 1;

            else
                k -= 1;
        }
	}
	return cnt;
	}
};
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  cin>>arr[i];
  Solution s;
   cout<<s.countTriplet(arr,n);
   return 0;
}
