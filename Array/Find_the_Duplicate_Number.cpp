#include<bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int>& nums) {
       int i=nums[0],j=nums[0];
       do
       {
            i=nums[i];
           j=nums[nums[j]];
       }while(i!=j);
       j=nums[0];
       while(i!=j)
       {
           i=nums[i];
           j=nums[j];
       }
       return i;
   }
   int main()
   {
     int n;
     cin>>n;
     vector<int> nums(n);
     for(int i=0;i<n;i++) cin>>nums[i];
     cout<<findDuplicate(nums)<<endl;
     return 0;
   }
