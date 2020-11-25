#include<iostream>
#include<bits/stdc++.h>
#include<set>
using namespace std;
void punion(int a[],int b[],int n,int m)
{
    set<int> s;
    for(int i=0;i<n;i++)
    s.insert(a[i]);
    for(int i=0;i<m;i++)
    s.insert(b[i]);
    cout<<s.size()<<endl;
}
void pintersection(int a[],int b[],int n,int m)
{
    set<int> s;
    for(int i=0;i<n;i++)
    s.insert(a[i]);
    for(int i=0;i<m;i++)
    {
        if(s.find(b[i])!=s.end())
        cout<<b[i]<<" ";
    }
    cout<<endl;

}
int main()
 {
	int t;
	cin>>t;
	while(t--)
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
	}
	return 0;
}
