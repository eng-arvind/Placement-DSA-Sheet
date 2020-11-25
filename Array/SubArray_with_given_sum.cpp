//Brutforce approach
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,s;
	    cin>>n>>s;
	    vector<int> v(n);
	    for(int i=0;i<n;i++)
	    cin>>v[i];
	    bool flag=false;
	    int start=-1,end=-1;
	    for(int i=0;i<n;i++)
	    {
	            int sm=v[i];
	            for(int j=i+1;j<=n;j++)
	            {
	                if(sm==s)
	                {
	                    start=i+1;
	                    end=j;
	                    flag=true;
	                    break;
	                }
	                if(sm>s)
	                break;
	                sm+=v[j];

	             }
	        if(flag)
	        break;
	    }
	    if(flag)
	    cout<<start<<" "<<end<<endl;
	    else
	    cout<<"-1"<<endl;

    }
	return 0;
}



//optimize approach
int subArraySum(int arr[], int n, int sum)
{
    int curr_sum = arr[0], start = 0, i;

    for (i = 1; i <= n; i++)
    {
        while (curr_sum > sum && start < i - 1)
         {
            curr_sum = curr_sum - arr[start];
            start++;
        }
        if (curr_sum == sum)
        {
            cout << "Sum found between indexes "
                 << start << " and " << i - 1;
            return 1;
        }
        if (i < n)
            curr_sum = curr_sum + arr[i];
    }
    cout << "No subarray found";
    return 0;
}
