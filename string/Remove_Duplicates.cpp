#include<bits/stdc++.h>
using namespace std;
string removeDups(string S)
{
    int cnt=0,i=0,j=0;
    while(i<S.length())
    {
        int v=S[i]-'a';
        if((cnt & (1<<v))==0)
        {
            S[j]=S[i];
            cnt = cnt | (1<<v);
            j++;
        }
        i++;
    }
    return S.substr(0,j);
}
int main()
{
  string S;
  cin>>S;
  cout<<removeDups(S)<<endl;
  return 0;
}
